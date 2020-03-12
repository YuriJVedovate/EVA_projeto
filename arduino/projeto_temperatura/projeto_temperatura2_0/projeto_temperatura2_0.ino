int pinosensor = 0; //A0
int valorlido = 0;
float temperatura = 0;
int linha = 0;
void setup() {
  Serial.begin(9600);
  Serial.print("CLEARDATA");
  Serial.println("LABEL, Hora, temperatura, linha");
}
void loop() {
  valorlido = analogRead (pinosensor);
  temperatura = (valorlido * (5/1023))* 100; // 5/1023 = 0.0048
  //temperatura = temperatura * 100;//10mv == 1
  linha++;
  Serial.print("DATA, TIME, ");
  Serial.print("temperatura");
  Serial.print(",");
  Serial.println(linha);

  if (linha > 100) {
    linha = 0;
    Serial.println("ROW,SET,2");
  }
  delay(1000);
}
