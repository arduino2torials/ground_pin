const int input = 5;
const int power = 6;
const int ground = 7;

const int led = 13;

void setup() {
  pinMode(input, INPUT);
  pinMode(power, OUTPUT);
  digitalWrite(power, HIGH);
  pinMode(ground, OUTPUT);
  digitalWrite(ground, LOW);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop() {
  digitalWrite(led, digitalRead(input));
}
