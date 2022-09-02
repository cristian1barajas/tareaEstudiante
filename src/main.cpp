#include <Arduino.h>

#define pulsadorAdelante 2
#define pulsadorAtras 3
#define pulsadorDerecha 4
#define pulsadorIzquierda 5

#define LED1 8
#define LED2 9
#define LED3 10
#define LED4 11

void setup() {
  pinMode(pulsadorAdelante, INPUT);
  pinMode(pulsadorAtras, INPUT);
  pinMode(pulsadorDerecha, INPUT);
  pinMode(pulsadorIzquierda, INPUT);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void loop() {
  if (digitalRead(pulsadorAdelante) == 1) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED3, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED4, LOW);
  }
  
  if (digitalRead(pulsadorAtras) == 1) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED4, HIGH);
  }
  
  if (digitalRead(pulsadorDerecha) == 1) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED4, HIGH);
  }
  
  if (digitalRead(pulsadorIzquierda) == 1) {
      digitalWrite(LED1, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED4, LOW);
  }   
}