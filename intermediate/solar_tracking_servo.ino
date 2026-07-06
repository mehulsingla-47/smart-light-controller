// C++ code
//
#include <Servo.h>

int LDR_VAL = 0;

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  LDR_VAL = analogRead(A0);
  Serial.println(LDR_VAL);
  if (LDR_VAL < 920) {
    digitalWrite(9, HIGH);
    servo_9.write(map(analogRead(A0), 0, 1023, 1023, 90));
    servo_9.write(5);
  } else {
    digitalWrite(9, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}