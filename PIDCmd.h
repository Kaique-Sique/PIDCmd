#include <Arduino.h>

/**
 * @file PIDCmd.h
 * @author BB-8 SESI 409 - robotics team
 * 
 * @brief PID control settings library
 * 
 * this file contains the PIDCmd class which implements a PID controller.
 * It includes methods for calculating the PID output based on the error and PID constants.
 */

class PIDCmd
{
private:
    // PID constants
    // These constants are used to tune the PID controller

    /////////////
    float _kp; // Proportional gain
    float _kd; // Derivative gain
    float _ki; // Integral gain
    /////////////

    // PID variables
    /////////////////////
    float last_error; // Last error value for derivative calculation
    float derivative; // Derivative of the error
    float integral;   // Integral of the error
    /////////////////////
    // PID output
    float out;

    // SetPoint
    float _setPoint;
    // Tolerance
    float _tolerance;

public:
    PIDCmd(float kp, float kd, float ki); // Constructor for PIDCmd class
    
    void setTolerance(float tolerance);

    bool isInSetpoint(float input);

    float PIDCalc(float setPoint, float input);
};
