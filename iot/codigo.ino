
// Projeto: Monitor de Temperatura com Arduino Uno
// Sensor: TMP36

const int sensorTemperatura = A0;
const int ledVerde = 8;
const int ledAmarelo = 9;
const int ledVermelho = 10;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(sensorTemperatura);
  float tensao = leitura * (5.0 / 1023.0);
  float temperatura = (tensao - 0.5) * 100.0;
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);

  if (temperatura < 28.0) {
    digitalWrite(ledVerde, HIGH);
    Serial.print("Estado: NORMAL");
  } 
  else if (temperatura < 32.0) {
    digitalWrite(ledAmarelo, HIGH);
    Serial.print("Estado: ATENCAO");

  } 
  else {
    digitalWrite(ledVermelho, HIGH);
    Serial.print("Estado: CRITICO");
  }
  Serial.print(" | Temperatura: ");
  Serial.print(temperatura, 2);
  Serial.println(" graus Celsius");
  delay(1000);
}
