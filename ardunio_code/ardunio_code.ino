#include <Servo.h>

Servo servoX;  // X ekseni servo nesnesi
Servo servoY;  // Y ekseni servo nesnesi

void setup() {
  Serial.begin(9600);  // Seri iletişimi başlat
  servoX.attach(9);    // X ekseni servo motoru, Arduino'da 9 numaralı pine bağlı
  servoY.attach(10);   // Y ekseni servo motoru, Arduino'da 10 numaralı pine bağlı
}

void loop() {
  if (Serial.available() > 0) {
    // X ekseni için servo pozisyonunu oku
    int servoXPos = Serial.parseInt();
    Serial.println(servoXPos);

    // Y ekseni için servo pozisyonunu oku
    int servoYPos = Serial.parseInt();
    Serial.println(servoYPos);
    servoX.write(servoXPos);
    servoY.write(servoYPos);

  }
}
