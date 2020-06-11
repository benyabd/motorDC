#include <AFMotor.h>
AF_DCMotor motor1(3);
AF_DCMotor motor2(2);

char bt='S';         //variabel data bluetooth (default S untuk stop) //Serial.write('oke');
int sp=150;          //variabel kecepatan, default 150

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  motor1.setSpeed(sp);
  motor2.setSpeed(sp);
  berhenti();
}

void loop() { 
bt=Serial.read();
motor1.setSpeed(sp);
motor2.setSpeed(sp);
  
if(bt=='F'){
 maju(); 
}

if(bt=='B'){
 mundur(); 
}

if(bt=='L'){
 kiri(); 
}

if(bt=='R'){
 kanan(); 
}

if(bt=='S'){
 berhenti(); 
}

if(bt=='1'){
 sp=20; 
}
if(bt=='2'){
 sp=50; 
}
if(bt=='3'){
 sp=100; 
}
if(bt=='4'){
 sp=140; 
}
if(bt=='5'){
 sp=180; 
}
if(bt=='6'){
 sp=200; 
}
if(bt=='7'){
 sp=220; 
}
if(bt=='8'){
 sp=230; 
}
if(bt=='9'){
 sp=245; 
}
if(bt=='q'){
 sp=255; 
}

}

void maju(){
  motor1.run(FORWARD);
  motor2.run(FORWARD); 
}
void mundur(){
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);   
}
void berhenti(){
  motor1.run(RELEASE);
  motor2.run(RELEASE);   
}
void kanan(){
  motor1.run(FORWARD);
  motor2.run(RELEASE);      
}
void kiri(){
  motor1.run(RELEASE);
  motor2.run(FORWARD);      
}
