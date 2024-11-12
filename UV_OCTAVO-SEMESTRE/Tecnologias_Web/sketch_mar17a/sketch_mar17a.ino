#include "DHTesp.h"
#define DHTpin 15
DHTesp dht;
#include <WiFi.h>
#include <Arduino.h>
#ifdef ESP32
#include <WiFi.h>
#include <AsyncTCP.h>
#elif defined(ESP8266)
#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#endif
#include <ESPAsyncWebSrv.h>

const char* ssid = "KEVIN_PANES";
const char* password = "31102001";

AsyncWebServer server(80);

void setup(){

  pinMode(2, OUTPUT);
  Serial.begin(9600);
  conectarse();
  server.on("/", HTTP_GET, [](AsyncWebServerRequest* request){
    int numParametros = request -> params();
    Serial.println(numParametros);
    if(numParametros == 0){
      request ->send(200, "text/html","<h1>Sensor de temperatura y humedad</h1>");
    }else{
      AsyncWebParameter* p=request->getParam(0);
      String html = "<h1> hola" + p->value() + " desde ESP32</h1>";
      request->send(200,"text/html",html);
    }
  });
  server.on("/adios", HTTP_GET, [](AsyncWebServerRequest* request){
    request->send(200,"text/html", "<h1>Adios</h1>");
  });

   server.on("/on", HTTP_GET, [](AsyncWebServerRequest* request){
    request->send(200,"text/html", "<h1>Encendido</h1>");
    digitalWrite(2, HIGH);
  });

  server.on("/off",HTTP_GET, [](AsyncWebServerRequest* request){
    request->send(200,"text/html", "<h1>Apagado</h1>");
    digitalWrite(2, LOW);
  });

  Serial.begin(9600);
  Serial.println();
  Serial.println("Estado\tHumedad (%)\tTemperatura (C)\t(F)\tIndiceCalor (C)\t(F)");
  dht.setup(DHTpin, DHTesp::DHT11);
}

void loop(){

  delay(dht.getMinimumSamplingPeriod());
  float humedad =  dht.getHumidity();
  float temperatura = dht.getTemperature();                            

  if (isnan(humedad) || isnan(temperatura)){
    Serial.println("No se pudo leer sensor DHT!");
    return;
  }

  Serial.print( dht.getStatusString() );
  Serial.print("\t");
  Serial.print(humedad, 1);
  Serial.print("\t\t");
  Serial.print(temperatura, 1);
  Serial.print("\t\t");
  Serial.print( dht.toFahrenheit(temperatura), 1);
  Serial.print("\t\t");
  Serial.print( dht.computeHeatIndex(temperatura, humedad, false), 1);
  Serial.print("\t\t");
  Serial.println(dht.computeHeatIndex(dht.toFahrenheit(temperatura), humedad, true), 1);
  delay(2000);

}

void conectarse(){
  Serial.println();
  Serial.println();
  Serial.print("Conenecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("Wifi Connected");
  Serial.println("Ip Address: ");
  Serial.println(WiFi.localIP());
}