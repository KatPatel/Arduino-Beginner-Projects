int rm1= 13;
int rm2= 12;
int lm1= 11;
int lm2= 10;
int fan= 9;
int lir= 0;
int mir= 1;
int rir= 2;
void forward() {
  digitalWrite(rm1, HIGH);
  digitalWrite(rm2, LOW);
  digitalWrite(lm1, HIGH);
  digitalWrite(lm2, LOW);
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
void backward() {
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, HIGH);
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, HIGH);
}
void stop() {
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, LOW);
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, LOW);
}
void setup() {
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(lir, INPUT);
  pinMode(mir, INPUT);
  pinMode(rir, INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int lir_value= analogRead(lir);
  int mir_value= analogRead(mir);
  int rir_value= analogRead(rir);
  Serial.println(lir_value);
  Serial.println(mir_value);
  Serial.println(rir_value);
  if(lir_value>600 and rir_value>600 and mir_value>600) {
    void forward();
  }
   if(lir_value<500 and rir_value<500 and mir_value<500) {
    void stop();
    digitalWrite(fan, HIGH);
    delay(5000);
    digitalWrite(fan,LOW);
  }
   if(lir_value>600 and rir_value>600 and mir_value<500) {
    void forward();
    delay(2000);
    void stop();
    digitalWrite(fan,HIGH);
    delay(5000);
    digitalWrite(fan,LOW);
  }
  if(lir_value<500 and rir_value>600 and mir_value>600) {
    void left();
    delay(2000);
    void stop();
    digitalWrite(fan,HIGH);
    delay(5000);
    digitalWrite(fan,LOW);
  }
  if(lir_value>600 and rir_value<500 and mir_value>600) {
    void right();
    delay(2000);
    void stop();
    digitalWrite(fan,HIGH);
    delay(5000);
    digitalWrite(fan,LOW);
  }
   
    
  // put your main code here, to run repeatedly:

}
