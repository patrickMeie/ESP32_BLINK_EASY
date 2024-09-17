#include <Arduino.h>
// Definiere den Pin der eingebauten LED (je nach Board-Variante kann das 2 oder 13 sein)
#define LED_BUILTIN 13

void setup() {
  // Setze den LED-Pin als Ausgang
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Schalte die LED ein
  digitalWrite(LED_BUILTIN, HIGH);
  // Warte 1000 Millisekunden (1 Sekunde)
  delay(2000);
  // Schalte die LED aus
  digitalWrite(LED_BUILTIN, LOW);
  // Warte 1000 Millisekunden (1 Sekunde)
  delay(2000);
}