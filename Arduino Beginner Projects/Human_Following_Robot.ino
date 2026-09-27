int rm1= 2;
int rm2= 3;
int lm1= 4;
int lm2= 5;
int lir= 0;
int rir= 1;
int ledb= 6;
int ledr= 7;
int ledg= 8;
void setup() {
  Serial.begin(9600);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(lir, INPUT);
  pinMode(rir, INPUT);
  pinMode(ledb, OUTPUT);
  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int lir_value= analogRead(lir);
  int rir_value= analogRead(rir);
  Serial.println(lir_value);
  Serial.println(rir_value);
  if(rir_value< 200 and lir_value< 200 ) {
    digitalWrite(rm1, LOW);
    digitalWrite(rm2, HIGH);
    digitalWrite(lm1, LOW);
    digitalWrite(lm2, HIGH);
    digitalWrite(ledb, HIGH);
    digitalWrite(ledr, LOW);
    digitalWrite(ledg, LOW);
  }  
  if(rir_value> 500 and lir_value> 500) {
    digitalWrite(rm1, LOW);
    digitalWrite(rm2, LOW);
    digitalWrite(lm1, LOW);
    digitalWrite(lm2, LOW);
    digitalWrite(ledb, LOW);
    digitalWrite(ledr, LOW);
    digitalWrite(ledg, LOW);
  }
  if(rir_value<200 and lir_value>500) {
    digitalWrite(rm1,LOW);
    digitalWrite(rm2,HIGH);
    digitalWrite(lm1,HIGH);
    digitalWrite(lm2,LOW);
    digitalWrite(ledb, LOW);
    digitalWrite(ledr, HIGH);
    digitalWrite(ledg, LOW);
  }
  if(rir_value> 500 and lir_value< 200) {
    digitalWrite(rm1,HIGH);
    digitalWrite(rm2,LOW);
    digitalWrite(lm1,LOW);
    digitalWrite(lm2,HIGH);
    digitalWrite(ledb, LOW);
    digitalWrite(ledr, LOW);
    digitalWrite(ledg, HIGH);
  }
  // put your main code here, to run repeatedly:

}
