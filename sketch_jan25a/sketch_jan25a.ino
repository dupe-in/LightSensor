int cds = A0;

void setup() {
  Serial.begin(9600);
  Serial.println("Start");
}

void loop() {
  int data = analogRead(cds);

  Serial.println(data);

  delay(500);
}
