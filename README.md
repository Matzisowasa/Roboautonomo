# Proyecto de Robótica: Robot Autónomo con Sistema Ackerman
Este proyecto consiste en un robot autónomo capaz de desplazarse sobre una pista realizando 3 vueltas completas, utilizando tres sensores ultrasónicos para la detección del entorno, un motor controlado mediante un driver BTS7960, y un sistema de dirección Ackerman accionado por un servomotor MG996R.

⚙️ GESTIÓN DE MOVILIDAD

La gestión de movilidad del robot se basa en la interacción coordinada entre los sensores ultrasónicos, el driver BTS7960, el motor principal y el servomotor de dirección Ackerman. Este sistema permite que el robot mantenga una trayectoria estable, evite obstáculos y complete las tres vueltas a la pista.

🔧 Componentes involucrados

3 sensores ultrasónicos HC-SR04: izquierda, frente y derecha.
1 servomotor MG996R para la dirección Ackerman.
1 motor DC de tracción controlado por el driver BTS7960.
Sistema de control basado en Arduino.

🧠 Lógica de movilidad

El robot evalúa constantemente las distancias detectadas por los sensores. Con base en esta información:
Mantiene dirección recta si no hay obstáculos.
Gira utilizando el servo cuando un sensor detecta una distancia menor al umbral.
Ajusta la velocidad del motor según la cercanía de los obstáculos.

🔁 Contador de vueltas

El robot lleva un conteo interno del número de vueltas completadas. Cuando llega a 3 vueltas, el vehículo detiene el motor.
