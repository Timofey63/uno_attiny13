#include <Arduino.h>

void setup() {
  DDRB |= (1 << PB0) | (1 << PB1); // Пины на выход
}

void loop() {
  // Синий (PB0)
  for(char i=0; i<3; i++) {
    PORTB |= (1 << PB0); delay(40);
    PORTB &= ~(1 << PB0); delay(50);
  }
  delay(120);
  
  // Красный (PB1)
  for(char i=0; i<3; i++) {
    PORTB |= (1 << PB1); delay(40);
    PORTB &= ~(1 << PB1); delay(50);
  }
  delay(120);
}