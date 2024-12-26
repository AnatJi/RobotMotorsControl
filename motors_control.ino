// Подключаем пины
const int motorAForward = 9;
const int motorABackward = 10;
const int motorBForward = 11;
const int motorBBackward = 12;

const int accelerationDelay = 10; // Задержка между изменениями скорости
const int maxSpeed = 255; // Максимальная скорость (ШИМ значение)

void setup() {
  // Настройка пинов как выходы
  pinMode(motorAForward, OUTPUT);
  pinMode(motorABackward, OUTPUT);
  pinMode(motorBForward, OUTPUT);
  pinMode(motorBBackward, OUTPUT);
}

void accelerateMotors(int pinForward, int pinBackward, int targetSpeed) {
  // Увеличение скорости до targetSpeed
  for (int speed = 0; speed <= targetSpeed; speed++) {
    analogWrite(pinForward, speed);
    analogWrite(pinBackward, LOW);  // Убедимся, что обратный мотор не работает
    delay(accelerationDelay);
  }
}

void decelerateMotors(int pinForward, int pinBackward) {
  // Плавное торможение
  for (int speed = maxSpeed; speed >= 0; speed--) {
    analogWrite(pinForward, speed);
    analogWrite(pinBackward, LOW);
    delay(accelerationDelay);
  }
}

void loop() {
  // Вперёд
  accelerateMotors(motorAForward, motorABackward, maxSpeed);
  delay(2000); // Двигаемся вперёд 2 секунды

  // Торможение
  decelerateMotors(motorAForward, motorABackward);
  delay(1000); // Пауза 1 секунда

  // Назад
  accelerateMotors(motorABackward, motorAForward, maxSpeed);
  delay(2000); // Двигаемся назад 2 секунды

  // Торможение
  decelerateMotors(motorABackward, motorAForward);
  delay(1000); // Пауза 1 секунда
}
