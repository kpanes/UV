#include <ArduinoJson.h>

const int pingPin = 13; //D19
int inPin = 12; //D18

void setup() {
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  Serial.begin(9600);
}

void loop() {
  long duration, cm;

  pinMode(pingPin, OUTPUT);

  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);
  pinMode(inPin, INPUT);
  duration = pulseIn(inPin, HIGH);

  cm = microsecondsToCentimeters(duration);

  // Crear el objeto JSON
  StaticJsonDocument<100> jsonDoc;
  jsonDoc["distance"] = cm;

  // Serializar el objeto JSON en una cadena
  String jsonString;
  serializeJson(jsonDoc, jsonString);

  // Enviar la cadena JSON a través de la comunicación serial
  Serial.println(jsonString);

  if (cm < 10) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }

  delay(100);
}

long microsecondsToCentimeters(long microseconds) {
  // La velocidad del sonido es de 340 m/s o 29 microsegundos por centímetro.
  // El ultrasonido viaja de ida y vuelta, por lo que se toma la mitad de la distancia recorrida.
  return microseconds / 29 / 2;
}