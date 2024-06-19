#include <WiFi.h>

// Definir el pin del relevador y del LED
const int relayPin = 16;
const int ledPin = 23;

void setup() {
  // Inicializar los pines del relevador y del LED como salida
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Abrir el relevador y encender el LED
  digitalWrite(relayPin, HIGH);
  digitalWrite(ledPin, HIGH);
  delay(5000); // Esperar 5 segundos

  // Cerrar el relevador y apagar el LED
  digitalWrite(relayPin, LOW);
  digitalWrite(ledPin, LOW);
  delay(5000); // Esperar 5 segundos
}
