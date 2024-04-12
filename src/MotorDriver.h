#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

class MotorDriver {
private:
    int stepNumber;
    int stepperPin1;
    int stepperPin2;
    int stepperPin3;
    int stepperPin4;
    bool dir;

public:
    MotorDriver(int pin1, int pin2, int pin3, int pin4, bool dir);
    void OneStep();
};

#endif