/*
Faça um programa que:
> inicie com o led apagado
> ao Clicar uma vez no "Botão Liga" acenda o led vermelho e mantenha aceso
> ao clicar uma vez no "Botão Desliga" apague o Vermelho e mantenha apagado
*/

void setup()
{
  pinMode(2, INPUT); // Botão Liga
  pinMode(7, INPUT); // Botão Desliga
  pinMode(13, OUTPUT);
}

void loop()
{  
  if (digitalRead(2)== HIGH)   
      {
    digitalWrite(13, HIGH);
  } 
  if (digitalRead (7)== HIGH)
  {
    digitalWrite(13, LOW);
  }
  delay(10);
}