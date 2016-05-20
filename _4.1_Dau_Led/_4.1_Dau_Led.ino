/******************************************************************
 **                                                              **       
 **                       DAU DE LEDS                            **
 **                                                              ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int i,b,j;
int num = 4;
int ledPin[]={5,6,7,8};
int cicle =6;

//***************  SETUP   ****************************************
void setup() {
  
}

//*************    LOOP   ******************************************
void loop() {
for (i = 0; i<num; i++){
  pinMode(ledPin[i],OUTPUT);
}

for(i = 0; i<cicle; i++){
b = i+1;
j = b-i;
  switch (i){
  
  case 1:
  {
  digitalWrite(ledPin[b], HIGH);
  delay (1000);
  digitalWrite(ledPin[b],LOW);
  delay (1000);}
  break;
  case 2:
  { 
  digitalWrite(ledPin[j], HIGH);
  digitalWrite(ledPin[num-j], HIGH);
  delay (1000);
  digitalWrite(ledPin[j],LOW);
  digitalWrite(ledPin[num-j],LOW);
  delay (1000);
  break;
  }
   case 3:
  { 
  digitalWrite(ledPin[i-j], HIGH);
  digitalWrite(ledPin[j], HIGH);
  delay (1000);
  digitalWrite(ledPin[i-j],LOW);
  digitalWrite(ledPin[j],LOW);
  delay (1000);
  break;
  }
   case 4:
  { 
  digitalWrite(ledPin[num-j], HIGH);
  digitalWrite(ledPin[2*j], HIGH);
  digitalWrite(ledPin[j], HIGH);
  delay (1000);
  digitalWrite(ledPin[num-j],LOW);
  digitalWrite(ledPin[2*j],LOW);
  digitalWrite(ledPin[j],LOW);
  delay (1000);
  break;
  }
    case 5:
  { j = b-i;
   digitalWrite(ledPin[j], HIGH);
  digitalWrite(ledPin[2*j], HIGH);
  digitalWrite(ledPin[0], HIGH);
 
  delay (1000);
   digitalWrite(ledPin[j], LOW);
  digitalWrite(ledPin[2*j], LOW);
  digitalWrite(ledPin[0], LOW);
  delay (1000);
  break;
  }
default:{
  digitalWrite(ledPin[(num-b)], HIGH);
 
  delay (1000);  
  digitalWrite(ledPin[num-b],LOW);
  delay (1000);
  break;
 
}
   
  }}
}  



