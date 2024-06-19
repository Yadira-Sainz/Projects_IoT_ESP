// ESP32-S3
#include <WiFi.h>

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
}

void loop() {
}

 // F4:12:FA:DF:6C:5C
 // 34:85:18:74:6E:18