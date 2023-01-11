#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
 
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define MIN_PULSE_WIDTH 650
#define MAX_PULSE_WIDTH 2350
#define FREQUENCY 50

int potVal = 0, pulse_wide, pulse_width;
int potVal2 = 0, pulse_wide2, pulse_width2;
int potVal3 = 0, pulse_wide3, pulse_width3;
int potVal4 = 0, pulse_wide4, pulse_width4;
int potVal5 = 0, pulse_wide5, pulse_width5;
int potVal6 = 0, pulse_wide6, pulse_width6;
int potVal7 = 0, pulse_wide7, pulse_width7;
 
void setup() {
  pwm.begin();
  pwm.setPWMFreq(FREQUENCY);
}
 
void loop() {
  potVal = analogRead(A0);
  pulse_wide = map(potVal, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width = int(float(pulse_wide) / 1000000 * FREQUENCY * 4096);
  pwm.setPWM(0, 0, pulse_width);

  potVal2 = analogRead(A1);
  pulse_wide2 = map(potVal2, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width2 = int(float(pulse_wide2) / 1000000 * FREQUENCY * 4096);
  pwm.setPWM(1, 0, pulse_width2);

  potVal3 = analogRead(A2);
  pulse_wide3 = map(potVal3, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width3 = int(float(pulse_wide3) / 1000000 * FREQUENCY * 4096);
  pwm.setPWM(2, 0, pulse_width3);

  potVal4 = analogRead(A3);
  pulse_wide4 = map(potVal4, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width4 = int(float(pulse_wide4) / 1000000 * FREQUENCY * 4096);
  pwm.setPWM(3, 0, pulse_width4);

  potVal5 = analogRead(A4);
  pulse_wide5 = map(potVal5, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width5 = int(float(pulse_wide5) / 1000000 * FREQUENCY * 4096);
  pwm.setPWM(4, 0, pulse_width5);

  potVal6 = analogRead(A5);
  pulse_wide6 = map(potVal6, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width6 = int(float(pulse_wide6) / 1000000 * FREQUENCY * 4096);
  pwm.setPWM(12, 0, pulse_width6);

  potVal7 = analogRead(A6);
  pulse_wide7 = map(potVal7, 0, 1023, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
  pulse_width7 = int(float(pulse_wide7) / 1000000 * FREQUENCY * 4096);
  pwm.setPWM(12, 0, pulse_width7);
}
