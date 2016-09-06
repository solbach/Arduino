/**************************************/
const int pin = 9;
/**************************************/
void setup()
{
  pinMode(pin,OUTPUT); //initialize thisPin as an output
}
/****************************************/
void loop()
{
  digitalWrite(pin,HIGH);//turn this led on
  delay(400);//wait for 100 microseconds

  digitalWrite(pin,LOW);//turn this led off
  delay(200);//wait for 100 microseconds
}


