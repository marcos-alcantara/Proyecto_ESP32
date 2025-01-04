//HW-080
const int humsuelo = 33;    //Lectura del sensor
int valHumsuelo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(humsuelo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Convertir el valor en porcentaje

  valHumsuelo = map(analogRead(humsuelo), 4092, 0, 0, 100);
  // valHumsuelo = map(analogRead(humsuelo), 0, 1023, 100, 0);

  //Imprimir valor
  Serial.print("Humedad del suelo: ");
  Serial.print(valHumsuelo);
  Serial.println(" %");
  sleep(1);
}