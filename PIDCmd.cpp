#include <Arduino.h>
#include "PIDCmd.h"

/**
 * @brief PID class contructor
 *
 * @param kp const proportional gain
 * @param kd const derivative gain
 * @param ki const integral gain
 */
PIDCmd::PIDCmd(float kp, float kd, float ki)
{
    _kp = kp;
    _kd = kd;
    _ki = ki;

    derivative = 0;
    integral = 0;
    lastError = 0;

    _tolerance = 0;
}

/**
 * @brief Set a PID Tolerance
 *
 * @param tolerance this value will say with the system get the setpoint
 */
void PIDCmd::setTolerance(float tolerance)
{
    _tolerance = tolerance;
}

/**
 * @brief Test if the system is in setpoint
 *
 * @param input input value from system
 *
 * @return if system is in setpoint ? true : false 
 */
bool PIDCmd::isInSetpoint(float input)
{
    bool onSetPoint = false;

    if( _tolerance < 0)
    {
        return onSetPoint;
    }
    else
    {
        if(input - _tolerance <= _setPoint 
            && input + _tolerance >= _setPoint)
        {
            onSetPoint == true;
        }
    }
    return onSetPoint;
}

/**
 * @brief calc PID 
 * 
 * @return out
 */
float PIDCmd::PIDCalc(float setPoint, float input)
{
    float error = input - setPoint;

    derivative = error - lastError

    float out = _kp * error + _kd * derivative + _ki * integral;

    integral = integral + error;
    lastError = error;

    _setPoint = setPoint;
    return out;
}

/**
 * @brief reset PID
 */
void PIDCmd::reset()
{
    derivative = 0;
    integral = 0;
    lastError = 0;
}
