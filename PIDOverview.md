# ⚙️ PID Overview
The PID control is a thecnical system most used in automation and industrial controls, Essential when we talk about precision and stability.

[![assista ao vídeo](https://img.youtube.com/vi/qKy98Cbcltw/0.jpg)](youtube.com/watch?v=qKy98Cbcltw)

>[!IMPORTANT]
>
> PIDs systens necess a good calibration to reach his potential

#### <b>PID</b>
* P - Proportional - valor proporcional ao erro (erro atual)
* I - Integral - valor da soma dos erro (erro passado)
* D - derivate - valor de estabilidade (erro futuro)

## ➗ PID equation
<img width="299" height="54" alt="image" src="https://github.com/user-attachments/assets/0dc6e873-626e-43e2-b2fa-7927ab86d2fc" />

out = (kp * error) + (ki * integral) + (kd *(error - lastError))

>[!WARNING]
>
> -> kp, kd and ki is constants.
>
> -> We set this constants to get the setpoint on the shortest way, without a big overshoot.


## 📈 Overshoot, what's it?
Overshoot occurs when the system goes past its set point and fluctuates without stability.

>[!IMPORTANT]
>
> A higher kp reaches the setpoint faster, however it causes a greater overshoot.

<img width="443" height="260" alt="Captura de tela 2025-11-20 152134" src="https://github.com/user-attachments/assets/bc07ed62-067f-4d71-9719-0168c1cd8a3e" />


