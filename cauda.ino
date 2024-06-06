#include <Servo.h>

Servo caudaServo;

void setup() {
    caudaServo.attach(9);
}

void loop() {
    // Movimento da cauda
    moverCauda(90);
    delay(250);
    moverCauda(120);
    delay(250);
    moverCauda(60);
    delay(250);
}

void moverCauda(int angle) {
    // Função para mover a cauda para um ângulo específico
    caudaServo.write(angle);
}
