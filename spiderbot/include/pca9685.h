#include <Arduino.h>

void set_servo(byte servo_pin, int value) {
    Serial.print("should move servo ");
    Serial.print(servo_pin);
    Serial.print(" to ");
    Serial.println(value);
}