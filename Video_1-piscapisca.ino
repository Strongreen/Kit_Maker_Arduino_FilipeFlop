
// Vídeo 1 da Série: https://youtu.be/4XZ7_d4Uqzg

void setup()
{
  //Define a porta do led como saida
  pinMode(11, OUTPUT);
}
 
void loop()
{
  //Acende o led
  digitalWrite(11, HIGH);
   
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
   
  //Apaga o led
  digitalWrite(11, LOW);
   
  //Aguarda intervalo de tempo em milissegundos
  delay(1000);
} 
