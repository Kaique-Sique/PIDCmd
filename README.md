# PIDCmd

## PID Overview
The PID control is a thecnical system most used in automation and industrial controls, Essential when we talk about precision and stability.

[![assista ao vídeo](https://img.youtube.com/vi/qKy98Cbcltw/0.jpg)](youtube.com/watch?v=qKy98Cbcltw)

>[!IMPORTANT]
>
> PIDs systens necess a good calibration to reach his potential

#### <b>PID</b>
* P - Proportional - valor proporcional ao erro (erro atual)
* I - Integral - valor da soma dos erro (erro passado)
* D - derivate - valor de estabilidade (erro futuro)

## PID equation
<img width="299" height="54" alt="image" src="https://github.com/user-attachments/assets/0dc6e873-626e-43e2-b2fa-7927ab86d2fc" />

out = (kp * error) + (ki * integral) + (kd *(error - lastError))

>[!WARNING]
>
> -> kp, kd and ki is constants.
>
> -> We set this constants to get the setpoint on the shortest way, without a big overshoot


