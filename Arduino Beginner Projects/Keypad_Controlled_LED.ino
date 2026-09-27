#include<Keypad.h>
int rm1= 10;
int rm2= 11;
int lm1= 12;
int lm2= 13;
const byte rows= 4;
const byte col= 4;
char hexkeys[rows][col]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};
byte rowPins[rows]={9,8,7,6}; 
byte cPins[col]={5,4,3,2};
Keypad customKeypad= Keypad(makeKeymap(hexkeys),rowPins,cPins,rows,col); 
void setup() {
  pinMode(rm1,OUTPUT);
  pinMode(rm2,OUTPUT);
  pinMode(lm1,OUTPUT);
  pinMode(lm2,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  char k=customKeypad.getKey();
  if(k){
    Serial.println(k);
    if(k=='9'){
      digitalWrite(rm1,HIGH);
    }
    if(k=='0'){
      digitalWrite(rm1,LOW);
    }

  }
}