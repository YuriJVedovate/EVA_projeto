
int pinoSensor = 0;
int valorLido = 0; 
float temperatura = 0; 
int linha = 0;

void setup() {
  Serial.begin(9600);
}

void loop(){
  valorLido = analogRead(pinoSensor); 
  temperatura = (valorLido * 0.004888);
  temperatura = temperatura * 100;
  linha++;
  Serial.print (temperatura);
   Serial.println(linha);

   if(linha>100)
   {
    linha = 0;
    Serial.println("ROW,SET,2");
   }
   delay(1000);
  }
