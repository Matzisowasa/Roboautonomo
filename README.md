# Proyecto de Robótica: Robot Autónomo con Sistema Ackerman
Este proyecto consiste en un robot autónomo capaz de desplazarse sobre una pista realizando 3 vueltas completas, utilizando tres sensores ultrasónicos para la detección del entorno, un motor controlado mediante un driver BTS7960, y un sistema de dirección Ackerman accionado por un servomotor MG996R.

🚗 Objetivo del Proyecto

Desarrollar un vehículo autónomo con dirección Ackerman que sea capaz de:
Detectar obstáculos mediante tres sensores ultrasónicos.
Controlar velocidad y dirección utilizando un servomotor y un driver de potencia.
Completar tres vueltas

🛠️ Componentes del Sistema

A continuación se describen los componentes principales del robot autónomo:
• Sensores ultrasónicos (3)
Permiten medir distancias hacia adelante, izquierda y derecha para evitar obstáculos.
• Servomotor MG996R
Controla la dirección mediante el sistema Ackerman, ajustando el ángulo de giro.
• Driver BTS7960
Controla el motor principal del vehículo, permitiendo avance y retroceso mediante señales PWM.
• Microcontrolador (Arduino)
Procesa las lecturas de los sensores y ejecuta el algoritmo de movimiento autónomo.

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

🔀 Gestión de la potencia y los sentidos

Fuente principal: Power Bank de 9V
El sistema utiliza una power bank de 9V como la fuente principal de energía. Esta elección permite mantener un suministro estable y portátil, adecuado para aplicaciones móviles. La energía proveniente de la power bank es distribuida hacia los diferentes módulos a través de reguladores que adaptan el voltaje según las necesidades de cada componente.
El controlador, los sensores y los actuadores reciben su energia mediante líneas independientes, lo que evita caídas de tensión y asegura una operación continua. Esta segmentación en la distribución energética garantiza que un aumento de consumo en un módulo no afecte el desempeño de los demás. 

📶 Regulación y Distribución de la Potencia

Para asegurar la compatibilidad entre la power bank de 9V y los componentes del sistema, se emplean reguladores de voltaje que estabilizan la salida a niveles seguros (5V o 3.3V según el módulo). Estos reguladores impiden variaciones críticas que puedan afectar el funcionamiento del microcontrolador o generar ruido eléctrico en los sensores.

Además, se implementa una distribución jerarquizada:

Primera etapa: recibe los 9V directos de la power bank.

Segunda etapa: los reguladores convierten y estabilizan el voltaje.

Tercera etapa: la energía regulada se dirige a sensores, motores y lógica del sistema(arduino).

Este esquema favorece un flujo energético eficiente y evita sobrecargas en etapas críticas.

🤖 Sistema Sensorial (Sentidos del Robot)

El sistema sensorial actúa como los "sentidos" del robot, permitiéndole percibir el entorno y responder adecuadamente. Entre estos sentidos se incluyen sensores ultrasónicos o cualquier módulo encargado de recopilar información del medio.
La precisión de estos sensores depende directamente de la calidad de la energía suministrada. Una power bank de 9V bien regulada reduce el ruido eléctrico y mejora la estabilidad de las lecturas. Gracias a ello, el robot puede:
Detectar obstáculos con mayor exactitud.
Mantener referencias espaciales estables.
Tomar decisiones basadas en datos confiables.
La interacción entre potencia estable y percepción sensorial precisa es esencial para el correcto desempeño del sistema

💻 Gestión de obstáculos

La gestión de obstáculos es un componente fundamental dentro del comportamiento autónomo del robot, ya que determina su capacidad para detectar, evaluar y reaccionar ante elementos presentes en su entorno.
Para este propósito, se emplean tres sensores ultrasónicos HC-SR04 distribuidos en posiciones izquierda, derecha y frontal, loscuales actúan como los “sentidos” principales del sistema. 
Estos sensores envían información constante sobre las distancias respecto a posibles obstáculos, permitiendo a la lógica del sistema tomar decisiones correctivas en tiempo real.
El robot integra un mecanismo de evitación basado en dos niveles:

1. Detección y reacción inmediata ante obstáculos frontales, para
prevenir colisiones.

2. Corrección continua de rumbo mediante control proporcional,
empleando diferencias laterales entre sensores izquierdo y
derecho.

El proceso asegura una navegación fluida y estable, combinando retrocesos controlados, redireccionamiento y ajustes dinámicos de dirección mediante el servomotor MG996R.
Cada acción se ejecuta según las condiciones detectadas, garantizando que el vehículo pueda evadir obstáculos y mantener una trayectoria adecuada.

