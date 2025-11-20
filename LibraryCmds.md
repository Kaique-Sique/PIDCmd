# 📖 Introducing the library
This file will show you everthing you need know about PIDCmd library

---

# 📚 Documentation
| # | Function | What it does? | 
| :---: | :--- | :--- |
| **1**|**PIDCmd**( float **kp**, float **kd**, float **ki**) |Main function(contructor) - It's you used to create a PID object with profield constants.|
| **2**| **void** setTolerance( float **tolerance**)|set a tolerance to PID.|
|**4**| **float** PIDCalc( float **setPoint**, float **input**)|Calc and return a out based on input error to setpoint and PID constants.|
|**3**|**bool** isInSetpoint( float **input**) |Read input based on setpoint and tolerance passed to object.|
