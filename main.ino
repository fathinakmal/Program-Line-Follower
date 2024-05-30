#include <Arduino.h>
#include "RobotLibrary.h"

void setup() {
  begin();
  polaritasMotor(0, 0);
}

void loop() {
  Loop();
}
