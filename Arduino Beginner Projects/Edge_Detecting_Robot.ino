int rw1= 10;
int rw2= 11;
int lw1= 12;
int lw2= 13;
int rir= 4;
int lir= 5; 

void setup() {
  pinMode(rw1, OUTPUT);
  pinMode(rw2, OUTPUT);
  pinMode(lw1, OUTPUT);
  pinMode(lw2, OUTPUT);
  pinMode(rir, INPUT);
  pinMode(lir, INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int rir_value= analogRead(rir);
  int lir_value= analogRead(lir);
  Serial.println(rir_value);
  Serial.println(lir_value);
  if(rir_value<500 and lir_value<500) {
    digitalWrite(rw1,HIGH);
    digitalWrite(rw2,LOW);
    digitalWrite(lw1,HIGH);
    digitalWrite(lw2,LOW);
  }
  if(rir_value>600 and lir_value>600) {
    digitalWrite(rw1,LOW);
    digitalWrite(rw2,HIGH);
    digitalWrite(lw1,LOW);
    digitalWrite(lw2,HIGH);

  }
  if(rir_value>600 and lir_value<500) {
    digitalWrite(rw1,LOW);
    digitalWrite(rw2,HIGH);
    digitalWrite(lw1,LOW);
    digitalWrite(lw2,HIGH);
    delay(2000);
    digitalWrite(rw1,LOW);
    digitalWrite(rw2,HIGH);
    digitalWrite(lw1,HIGH);
    digitalWrite(lw2,LOW);
  }
  if(rir_value<500 and lir_value>600) {
    digitalWrite(rw1,HIGH);
    digitalWrite(rw2,LOW);
    digitalWrite(lw1,HIGH);
    digitalWrite(lw2,LOW);
    delay(2000);
    digitalWrite(rw1,HIGH);
    digitalWrite(rw2,LOW);
    digitalWrite(lw1,LOW);
    digitalWrite(lw2,HIGH);
  }
  // put your main code here, to run repeatedly:

}
