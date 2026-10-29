const int LED1 = 12;

bool state1 = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);

  digitalWrite(LED1, state1);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  state1 = !state1;
  digitalWrite(LED1, state1);
}
