// --- MOVILIDAD / CONTROL DE DIRECCIÓN ---
Servo direccionServo;
const int SERVO_PIN = 3;

direccionServo.attach(SERVO_PIN);

// Girar ruedas hacia la izquierda
direccionServo.write(45);

// Girar ruedas hacia la derecha
direccionServo.write(135);
