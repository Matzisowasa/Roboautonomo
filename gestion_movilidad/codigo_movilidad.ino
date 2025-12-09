⛧ Servo para dirección (girar ruedas)

Servo direccion;

const int SERVO_PIN = 11;
int SERVO_IZQ = 1600;
int SERVO_CENTRO = 2000;
int SERVO_DER = 2500;
⛧ Configuración del servo
direccion.attach(SERVO_PIN, 500, 2500);
direccion.writeMicroseconds(SERVO_CENTRO);
⛧ Giros y control de dirección en el loop
direccion.writeMicroseconds(SERVO_CENTRO);
direccion.writeMicroseconds(SERVO_IZQ);
direccion.writeMicroseconds(SERVO_DER);
Funciones utilizadas en el código:
•	motorAdelante(vel) → movimiento hacia adelante
•	motorAtras(vel) → movimiento hacia atrás
•	motorStop() → detención total
Dirección por servo
El vehículo utiliza un servo ubicado en el eje delantero, encargado de ajustar el ángulo de giro. Para ello se definieron tres microsegundos representativos:
•	SERVO_IZQ = 1600 µs
•	SERVO_CENTRO = 2000 µs
•	SERVO_DER = 2500 µs
