#include <AFMotor.h>
AF_DCMotor motor1(1);   //fr
AF_DCMotor motor2(2);   //fl
AF_DCMotor motor3(3);   //bl
AF_DCMotor motor4(4);   //br


char bt='S';         //variabel data bluetooth (default S untuk stop) //Serial.write('oke');
int sp=150;          //variabel kecepatan, default 150
int sb=80;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  berhenti();
}

void loop() { 
bt=Serial.read();
sb=sp/4;


  
if(bt=='F'){
  KC();
 maju(); 
// Serial.print("Maju");
}

if(bt=='B'){
  KC();
 mundur(); 
}

if(bt=='L'){
  KC();
 kiri(); 
}

if(bt=='R'){
  KC();
 kanan(); 
}
if(bt=='G'){
KL();
 majukiri(); 
}
if(bt=='I'){
KR();
 majukanan(); 
}
if(bt=='H'){
KL();
 mundurkiri(); 
}
if(bt=='J'){
KR();
 mundurkanan(); 
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
  motor3.run(FORWARD);
  motor4.run(FORWARD); 
}
void mundur(){
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);   
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);   
}
void berhenti(){
  motor1.run(RELEASE);
  motor2.run(RELEASE);   
  motor3.run(RELEASE);
  motor4.run(RELEASE);   

}
void kiri(){
  motor1.run(FORWARD);
  motor2.run(BACKWARD);   
  motor3.run(BACKWARD);    
  motor4.run(FORWARD);
}
void kanan(){
  motor1.run(BACKWARD);
  motor2.run(FORWARD);  
  motor3.run(FORWARD);
  motor4.run(BACKWARD);     
}

//serong
void majukiri(){

  motor1.run(FORWARD);
  motor2.run(FORWARD);   
  motor3.run(FORWARD);    
  motor4.run(FORWARD);
}
void majukanan(){

  motor1.run(FORWARD);
  motor2.run(FORWARD);  
  motor3.run(FORWARD);
  motor4.run(FORWARD);     
}
void mundurkiri(){

  motor1.run(BACKWARD);
  motor2.run(BACKWARD);   
  motor3.run(BACKWARD);    
  motor4.run(BACKWARD);
}
void mundurkanan(){

  motor1.run(BACKWARD);
  motor2.run(BACKWARD);  
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);     
}

void KC(){
motor1.setSpeed(sp);
motor2.setSpeed(sp);
motor3.setSpeed(sp);
motor4.setSpeed(sp);
}
void KR(){
  motor1.setSpeed(sb);
  motor2.setSpeed(sp);
  motor3.setSpeed(sp);
  motor4.setSpeed(sb);
}
void KL(){
  motor2.setSpeed(sb);
  motor1.setSpeed(sp);
  motor4.setSpeed(sp);
  motor3.setSpeed(sb);
}
