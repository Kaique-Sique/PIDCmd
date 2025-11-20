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
public:
    PIDCmd(/* args */); // Constructor for PIDCmd class
    float PIDCalc(float error, float kp, float kd, float ki); // Method to calculate the PID output based on the error and PID constants
};

/**
 * @brief PID class contructor
 */
PIDCmd::PIDCmd(/* args */)
{
}

/**
 * @brief PID calculator
 * 
 * @param error PID error
 * 
 * @param kp const proportional gain
 * @param kd const derivative gain
 * @param ki const integral gain
 */
float PIDCmd::PIDCalc(float error, float kp, float kd, float ki)
{
    integral += error;
    derivative = error - last_error;

    out = (error * kp) + (derivative * kd) + (integral * ki);

    last_error = error;  // ← ESSENCIAL!

    return out;
}
