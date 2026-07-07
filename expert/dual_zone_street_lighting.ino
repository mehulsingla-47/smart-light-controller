// C++ code
//
int LDR_VAL = 0;

int pir_sensor1 = 0;

int pir_sensor2 = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  LDR_VAL = analogRead(A0);
  pir_sensor1 = digitalRead(8);
  pir_sensor2 = digitalRead(9);
  Serial.println(LDR_VAL);
  Serial.println(pir_sensor1);
  Serial.println(pir_sensor2);
  if (LDR_VAL < 920 && (pir_sensor1 == 1 && pir_sensor2 == 1)) {
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
  if (LDR_VAL < 920 && (pir_sensor1 == 1 && pir_sensor2 != 1)) {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
  }
  if (LDR_VAL < 920 && (pir_sensor1 != 1 && pir_sensor2 == 1)) {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  if (LDR_VAL < 920 && (pir_sensor1 != 1 && pir_sensor2 != 1)) {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}