void setup() {
  // Para executar uma vez:
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
}

void loop() {
  // Executar o loop:
  
  // Sinal vermelho e verde para pedestre
  digitalWrite (10, HIGH); // Ligar
  digitalWrite (11, HIGH);
  digitalWrite (8, LOW); // Desligar
  digitalWrite (9, LOW);
  digitalWrite (12, LOW);
  delay (10000);

  digitalWrite (9, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (8, LOW);
  digitalWrite (10, LOW);
  digitalWrite (12, LOW);
  delay (10000);

  digitalWrite (8, HIGH);
  digitalWrite (12, HIGH);
  digitalWrite (10, LOW);
  digitalWrite (9, LOW);
  digitalWrite (11, LOW);
  delay (10000);
}
