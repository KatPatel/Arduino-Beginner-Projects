int rm1= 10;
int rm2= 11;
int lm1= 12;
int lm2= 13;
int lir= 4;
int rir= 5;
void setup() {
  Serial.begin(9600);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(lir, INPUT);
  pinMode(rir, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int lir_value= analogRead(lir);
  int rir_value= analogRead(rir);
  Serial.println(lir_value);
  Serial.println(rir_value);
  if(lir_value>500 and rir_value>500) {
    digitalWrite(rm1, HIGH);
    digitalWrite(rm2, LOW);
    digitalWrite(lm1, HIGH);
    digitalWrite(lm1, LOW);
  }
  if(lir_value<200 and rir_value<200) {
    digitalWrite(rm1, LOW);
    digitalWrite(rm2, LOW);
    digitalWrite(lm1, LOW);
    digitalWrite(lm1, LOW);
  }
  if(lir_value<200 and rir_value>500) {
    digitalWrite(rm1, HIGH);
    digitalWrite(rm2, LOW);
    digitalWrite(lm1, LOW);
    digitalWrite(lm1, HIGH);
  }
  if(lir_value>500 and rir_value<200) {
    digitalWrite(rm1, LOW);
    digitalWrite(rm2, HIGH);
    digitalWrite(lm1, HIGH);
    digitalWrite(lm1, LOW);
  }
  // put your main code here, to run repeatedly:

}

