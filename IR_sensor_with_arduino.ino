// ---------------------------------------------------------------- //
// ID OF USER: Rakeshtsg
// INTERFACE: Arduino 
// Using Arduino IDE 
// Using IR sensor with arduino
// Tested on N/A
//VCC-VCC
//GND-GND
//DIGITAL -3DIGITAL
// ---------------------------------------------------------------- //

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(3)== LOW)
  {
    digitalWrite(13,HIGH);
    
    delay(10);
  }
  else 
  {
    
    digitalWrite(13,LOW);
    delay(10);
    
  }
  
}
