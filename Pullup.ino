// C++ code
//
void setup() // Aquí asignamos os valores, como se mostra a continuación
{
  pinMode(10, INPUT); // O pin 10 é unha entrada, neste caso o pulsador
  pinMode(13, OUTPUT); // O Pin 13 é unha saída, neste caso o Led verde
  pinMode(12, OUTPUT); // O Pin 12 é unha saída, neste caso o Led vermello
  pinMode(11, OUTPUT); // O Pin 11 é unha saída, neste caso é o relé
}

void loop() //bucle. Aquí é donde introducimos os comandos que queremos que se executen.
{
  if (digitalRead(10) == HIGH) // Aparición da condición "if", na que significa que: "si" a lectura dixital do pin 10 (pulsador) é alta, se cumplan as condicións que se mostran a continuaxión
  {
    digitalWrite(13, HIGH); // Damos corrente ao pin 13 (led).
    delay(10000); // Wait for 10000 millisecond(s) Agardamos 10 segundos.
    digitalWrite(13, LOW); // Deixamos de alimentar o pin 13.
    delay(4000); // Wait for 4000 millisecond(s) Esperamos 4 segundos.
    digitalWrite(12, HIGH); // Alimentamos pin 12 (led).
    digitalWrite(11, HIGH); // Alimentamos pin 11 (relé).
    delay(10000); // Wait for 10000 millisecond(s) Agardamos 10 segundos
    digitalWrite(12, LOW); // Quitamos alimentación no pin 12.
    digitalWrite(11, LOW); // Quitamos alimentación no pin 11.
    delay(4000); // Wait for 4000 millisecond(s) Agardamos 4 segundos.
  } 
  else // Aparición condión "else", que significa "senon". Ven referido á condición anterior (if) decindo que se non se cumple "if" que se cumpla o seguinte comando. 
  { 
    digitalWrite(12, LOW); // Deixamos de alimentar o pin 12.
    digitalWrite(11, LOW); // Deixamos de alimentar o pin 11.
  }
}
