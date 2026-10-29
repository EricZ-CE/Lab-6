const int LED1 = 12;
const int LED2 = 8;

bool state1 = LOW;
bool state2 = LOW;

int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  digitalWrite(LED1, state1);
  digitalWrite(LED2, state2);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  state1 = !state1;
  digitalWrite(LED1, state1);

  count++;

  if (count % 2 == 0){
    state2 = !state2;
    digitalWrite(LED2, state2);
  }
}
