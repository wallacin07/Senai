// C++ code
//

int led1 = 9;
int led2 = 6;
int led3 = 3;
int val = 0;
float tensao = 0;
float potenciometro = A4;
char string[5];
float x;
int botao = 4;
float i = -6.28;


void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9500);
}




void loop()
{  
  
  float variacao;
  int pulsacao=1;
      if(digitalRead(botao))
    {
      Serial.println("ola");
      pulsacao != 3 ? (pulsacao+=1):(pulsacao = 1);
      Serial.println(pulsacao);
    }  

    Serial.println(digitalRead(botao));

    if(pulsacao != 1){
      
        for(;i <= 6.28;i += 0.1){
          variacao = 255*(sin(i)+1)/6.28;
          analogWrite(led1, variacao);
          analogWrite(led2, variacao);
  		  analogWrite(led3, variacao);
  		  delay(500/(pulsacao*2));
  		}
    }   
}