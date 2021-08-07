#include<TimerOne.h>
int state = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
Timer1.initialize(1000000);//microsecond for 1 second
Timer1.attachInterrupt(icr);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(12,1);
 delay(500);
 digitalWrite(12,0);
 delay(500);
}
void icr(){
 if (state == 0) {
  digitalWrite(13,0);
  state = 1;
  return;
 }
 if(state == 1) {
  digitalWrite(13,1);
  state = 0;
  return;
 }
}
