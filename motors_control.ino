// Подключаем пины
const int motorAForward = 9;
const int motorABackward = 10;
const int motorBForward = 11;
const int motorBBackward = 12;

void setup() {
  // Настройка пинов как выходы
  pinMode(motorAForward, OUTPUT);
  pinMode(motorABackward, OUTPUT);
  pinMode(motorBForward, OUTPUT);
  pinMode(motorBBackward, OUTPUT);
}

void loop() {
  // Вперёд
  digitalWrite(motorAForward, HIGH);
  digitalWrite(motorBForward, HIGH);
  delay(2000); // Двигаемся вперёд 2 секунды

  // Пауза
  digitalWrite(motorAForward, LOW);
  digitalWrite(motorBForward, LOW);
  delay(1000); // Пауза 1 секунда

  // Назад
  digitalWrite(motorABackward, HIGH);
  digitalWrite(motorBBackward, HIGH);
  delay(2000); // Двигаемся назад 2 секунды

  // Пауза
  digitalWrite(motorABackward, LOW);
  digitalWrite(motorBBackward, LOW);
  delay(1000); // Пауза 1 секунда
}

