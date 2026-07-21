int led1 = A2, led2 = A3;
int i;


void setup() {
  // put your setup code here, to run once:

  //led vermelho
  pinMode(led1, OUTPUT);
  //led verde
  pinMode(led2, OUTPUT);
  //definindo a porta para o Buzzer
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //aumenta o brilho de 0 a 255
  for (i=0; i<5; i++)
  {
    //acende o led1 e apaga o outro, com delay
  	analogWrite(led1, i);
    //255 é o brilho máx. do led
  	analogWrite(led2, 254-i);
    delay(30);
    //pino de conexão, frequência do som, duração
    tone(3,400,500);
  }
  delay(300);
  
  //acende o led2 e apaga o outro, com delay
  for (i=0; i<5; i++)
  {
  	analogWrite(led2, i);
  	analogWrite(led1, 254-i);
    delay(30);
    //pino de conexão, frequência do som, duração
    tone(3,800,500);
  }
    delay(300);
}
