#include <AFMotor.h>
AF_DCMotor motor1(2);
AF_DCMotor motor2(3);

void setup() {
  // put your setup code here, to run once:
  motor1.setSpeed(150);
  motor2.setSpeed(150);
  berhenti();
}

void loop() { 
 maju(); 
 delay(100);
 berhenti();
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
