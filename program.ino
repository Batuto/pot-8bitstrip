// Author: Batuto
// Github: github.com/Batuto
// This program read an input from the analog pin A0 and writes
// it in a rising manner in the PORTD (pins from 0 to 7) of an arduino Uno or Nano (May work with similar hardware, maybe need modifications)

int i, value;


void setup(){
  for(i = 2; i < 8; i++)
    pinMode(i, OUTPUT);
  pinMode(14, INPUT);
  PORTD = 0;
}

void loop(){
  if(analogRead(14) <= 128)
    PORTD = B1;
  if(analogRead(14) > 128 && analogRead(14) <= 256)
    PORTD = B11;
  if(analogRead(14) > 256 && analogRead(14) <= 384)
    PORTD = B111;
  if(analogRead(14) > 384 && analogRead(14) <= 512)
    PORTD = B1111;
  if(analogRead(14) > 512 && analogRead(14) <= 640)
    PORTD = B11111;
  if(analogRead(14) > 640 && analogRead(14) <= 768)
    PORTD = B111111;
  if(analogRead(14) > 768 && analogRead(14) <= 896)
    PORTD = B1111111;
  if(analogRead(14) > 896 && analogRead(14) <= 1024)
    PORTD = B11111111;
 delay(10);
}
