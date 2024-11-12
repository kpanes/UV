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

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  conectarse();
  server.on("/", HTTP_GET, [](AsyncWebServerRequest* request){
    int numParametros = request -> params();
    Serial.println(numParametros);
    if(numParametros == 0){
      request ->send(200, "text/html","<h1>Hola Mundo</h1>");
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
  
  server.begin();
  /*
  delay(10);
*/
}
void loop() {
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