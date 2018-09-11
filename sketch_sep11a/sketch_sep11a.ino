#include <EEPROM.h>

  int Direccion = 0;
  byte val1;
  byte val2;

void setup(){

  /*------ Arduinoo: ------*/
  
  Serial.begin(9600);
   int Direccion = 0;
  byte val1;
  byte val2;
  byte Information=B11001;
  int Valor = analogRead (0);
  EEPROM.write (Direccion,Information);
  EEPROM.write (Direccion+1,Valor);
}

void Loop(){
  EEPROM.read(Direccion);
  EEPROM.read(Direccion+1);

  Serial.print('en la direccion esta: ');
  Serial.print(Direccion);
  Serial.print('se encuentra ');
  Serial.print(val1,DEC);
  
  delay(100);

  Serial.print('en la direccion esta: ');
  Serial.print(Direccion+1);
  Serial.print('se encuentra ');
  Serial.print(val2,DEC);
}
