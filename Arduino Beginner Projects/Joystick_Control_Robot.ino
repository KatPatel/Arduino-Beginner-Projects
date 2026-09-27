int rm1=2;
int rm2=3;
int lm1=5;
int lm2=4;
int x=0;
int y=1; 
void setup() {
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}
void forward() {
  digitalWrite(rm1,HIGH);
  digitalWrite(rm2,LOW);
  digitalWrite(lm1, HIGH);
  digitalWrite(lm2, LOW);
}
void loop() {
 int xvalue= analogRead(x);
 int yvalue= analogRead(y);
 Serial.println("x=");
 Serial.println(xvalue);
 Serial.println("y=");
 Serial.println(yvalue);
 if(yvalue<300){
  void forward();
 }
  // put your main code here, to run repeatedly:

}
