int placaUno = A0;
int presionUno = 0;
int S1 = 0;

int placaDos = A1;
int presionDos = 0;
int S2 = 0;

int placaTres = A2;
int presionTres = 0;
int S3 = 0;

int placaCuatro = A3;
int presionCuatro = 0;
int S4 = 0;

int placaCinco = A4;
int presionCinco = 0;
int S5 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  presionUno = analogRead(placaUno);  // read the input pin
  presionDos = analogRead(placaDos);
  presionTres = analogRead(placaTres);
  presionCuatro = analogRead(placaCuatro);
  presionCinco = analogRead(placaCinco);

  if (presionUno >= 100){
    S1 = 1;
  }else{
    S1 = 0;
  }
  
  if (presionDos >= 100){
    S2 = 1;
  }else{
    S2 = 0;
  }
  
  if (presionTres >= 100){
    S3 = 1;
  }else{
    S3 = 0;
  }
  
  if (presionCuatro >= 100){
    S4 = 1;
  }else{
    S4 = 0;
  }
  
  if (presionCinco >= 100){
    S5 = 1;
  }else{
    S5 = 0;
  }
  delay(250);
  Serial.print(S1);          // debug value
  Serial.print(",");
  Serial.print(S2);
  Serial.print(",");
  Serial.print(S3);
  Serial.print(",");
  Serial.print(S4);
  Serial.print(",");
  Serial.println(S5);
}
