#include<Keypad.h>
int LED= 12;
int Buzzer=13;
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
  pinMode(LED,OUTPUT);
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  char k=customKeypad.getKey();
  if(k){
    Serial.println(k);
    if(k=='9'){
      digitalWrite(LED,HIGH);

    }
    if(k=='0'){
      digitalWrite(LED,LOW);
    }
    if(k=='1'){
      digitalWrite(Buzzer,HIGH);
    }
    if(k=='3'){
      digitalWrite(Buzzer,LOW);
    }

  }

  // put your main code here, to run repeatedly:

}
