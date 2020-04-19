#include <Arduino.h>

#include "ik/nuke.h"

void setup() {
  Serial.begin(115200); 
  
  // setup IK
  setupIK();
  gaitSelect(RIPPLE);
  doIK();
}

void loop() {
  // put your main code here, to run repeatedly:
}