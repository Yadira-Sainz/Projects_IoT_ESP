//ESP32-Relay x1_v1.2 

#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  while(!Serial); // Espera hasta que la interfaz Serial esté lista
  
  WiFi.begin(); // Inicializa la biblioteca WiFi

  Serial.println();
  Serial.print("Dirección MAC de la placa ESP:  ");
  Serial.println(WiFi.macAddress());
}

void loop() {
  while(!Serial); // Espera hasta que la interfaz Serial esté lista
  
  WiFi.begin(); // Inicializa la biblioteca WiFi

  Serial.println();
  Serial.print("Dirección MAC de la placa ESP:  ");
  Serial.println(WiFi.macAddress());
  delay(1000);
}

//E8:6B:EA:DF:D4:48    //543731AP166-231208
//D8:BC:38:FD:95:C8    //543731AP166-231221