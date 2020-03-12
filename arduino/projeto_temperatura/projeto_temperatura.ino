int pinosensor = 0; //A0
int valorlido = 0;
float temperatura = 0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  valorlido = analogRead (pinosensor);
  temperatura = (valorlido * (5/1023))* 100; // 5/1023 = 0.0048
  //temperatura = temperatura * 100;//10mv == 1
  Serial.print(temperatura, "C");
  delay(1000);
}
