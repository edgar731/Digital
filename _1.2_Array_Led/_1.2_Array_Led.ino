/******************************************************************
 **                                                              **       
 **                 Array LEDS  01010101 - 10101010              ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int arrayLed [] ={5,6,7,8,9,10,11,12};
int i,j,p ;
 


//***************  SETUP   ****************************************
void setup() {
for (i=0; i<8; i++)
{  
pinMode(arrayLed [i],OUTPUT);  

}

 

}

//*************    LOOP   ******************************************
void loop() {

 for (p=0; p<2; p++) {
delay (5000);       
 
 if (p!=1){ 
  j =i+1;
      for (i=0; i<8; i=i+2) {
  j =i+1;
  digitalWrite (arrayLed[j],LOW);  
  digitalWrite (arrayLed[i], HIGH);
      }
 }
else{
  for (i=0; i<8; i=i+2) {      
    j =i+1;
digitalWrite (arrayLed[i],LOW);  
digitalWrite (arrayLed[j], HIGH);
}
 }
 
}
}

