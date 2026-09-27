int rm1= 9;
int rm2= 10;
int lm1= 12;
int lm2= 13;
int rir= 0;
int lir= 1;
void stop() {
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, LOW);
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, LOW);
}
void forward() {
  digitalWrite(rm1, HIGH);
  digitalWrite(rm2, LOW);
  digitalWrite(lm1, HIGH);
  digitalWrite(lm2, LOW);
}
void backward() {
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, HIGH);
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, HIGH);
}
void right() {
  digitalWrite(rm1, HIGH);
  digitalWrite(rm2, LOW);
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, HIGH);
}
void left() {
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, HIGH);
  digitalWrite(lm1, HIGH);
  digitalWrite(lm2, LOW);
}
void setup() {
  Serial.begin(9600);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(rir, INPUT);
  pinMode(lir, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int rir_value= analogRead(rir);
  int lir_value= analogRead(lir);
  Serial.println(rir_value);
  Serial.println(lir_value);
  if(rir_value>500 and lir_value>500) {
    forward();
  }
  if(rir_value<200 and lir_value<200) {
    stop();
  }
  if(rir_value>500 and lir_value<200) {
    right();
  }
  if(rir_value<200 and lir_value>500) {
    left();
  }
  // put your main code here, to run repeatedly:

}
