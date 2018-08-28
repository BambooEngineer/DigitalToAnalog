int LeftD = 6; // Pulled HIGH Digital Input Pins
int RightD = 7; 
int Left = 4;  
int Right = 5; 
                                                                


int up = A3; // Potentiometer Middle Pin  //
int Vv = A5; // Potentiometer Voltage Pin //
int right = 10; // Potentiometer Middle Pin //
int Hv = 12; // Output Voltage Pin // 

int L = 0;
int R = 0;
int l = 0;
int r = 0;

void setup() {
  
  pinMode(LeftD, INPUT_PULLUP);
  pinMode(RightD, INPUT_PULLUP);
  pinMode(Left, INPUT_PULLUP); 
  pinMode(Right, INPUT_PULLUP);
  pinMode(up, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(Vv, OUTPUT);
  pinMode(Hv, OUTPUT);
  
}

void loop() {

 L = digitalRead(LeftD); 
 R = digitalRead(RightD);
 l = digitalRead(Left); 
 r = digitalRead(Right); 


 if(R==0){
    digitalWrite(right,HIGH );
  }
 else{
    digitalWrite(right,LOW);
  }


 if(L==0){
    digitalWrite(Hv,LOW);
  }
 else{
    digitalWrite(Hv,HIGH);
 }

 if(r==0){ 
    analogWrite(up,HIGH );
  }
 else{
    analogWrite(up,LOW);
  }


  if(l==0){ 
    analogWrite(Vv,LOW);
  }
 else{
    analogWrite(Vv,HIGH);
 }

}
