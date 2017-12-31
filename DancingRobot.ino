#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                             // Declare left servo signal
Servo servoRight;                            // Declare right servo signal

void setup()                                 // Built in initialization block
{
  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                      // Attach left signal to pin 12

  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);

}  

void clap() {
  servoLeft.writeMicroseconds(1550);         
  servoRight.writeMicroseconds(1480);   

  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(500);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(500);

  servoLeft.writeMicroseconds(1500);         
  servoRight.writeMicroseconds(500);       

  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(500);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(500);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  delay(500);
}

void rightLeft() {
  servoLeft.writeMicroseconds(1550);         
  servoRight.writeMicroseconds(1480);   
  delay(2000);
  
  servoLeft.writeMicroseconds(1500);         
  servoRight.writeMicroseconds(500);       
  delay(2000);
}

void turn90Left(){
  servoRight.writeMicroseconds(700); 
  servoLeft.writeMicroseconds(1500);  
  delay(1300);
}

void turn90Right(){
  servoRight.writeMicroseconds(1500); 
  servoLeft.writeMicroseconds(2000);  
  delay(1300);
}

void turn45Right(){
  servoRight.writeMicroseconds(1500); 
  servoLeft.writeMicroseconds(1700);  
  delay(2000);
}

void turn45Left(){
  servoRight.writeMicroseconds(500); 
  servoLeft.writeMicroseconds(1500);  
  delay(2000);
}

void backward(int backwardTime){
  servoRight.writeMicroseconds(2000); 
  servoLeft.writeMicroseconds(1000); 
  delay(backwardTime);
}

void forward(int forwardTime) {
  servoRight.writeMicroseconds(1000); 
  servoLeft.writeMicroseconds(2000);  
  delay(forwardTime); 
}

void turn360 (){
  servoRight.writeMicroseconds(500); 
  servoLeft.writeMicroseconds(1450);
  delay(4000);
}


void stop (int stopTime) {
  servoRight.writeMicroseconds(1500); 
  servoLeft.writeMicroseconds(1500); 
  delay (stopTime);
}
void loop()                                  // Main loop auto-repeats
{ 
  //digitalWrite(7, HIGH);
 // digitalWrite(8, HIGH);
  //digitalWrite(9, HIGH);
  //delay(200);
  clap();
  clap();
  stop(100);
  turn90Left();
  forward(200);
  turn90Right();
  backward(700);
  stop(1200);
  forward(500);
  backward(500);
  rightLeft();
  stop(100);
  turn360(); 
  forward(100);
}


