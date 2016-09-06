//Temperature Monitor
/* The Buzzer will sound if the temperature is higher than 
10 degrees Celsius for more than 3 minutes*/
//Email:solbach@cse.yorku.ca
//2016
/**************************************/
#define analogPin A0   //the thermistor attach to
#define beta 4090      //the beta of the thermistor
#define resistance 10  //the value of the pull-down resistor
const int pin = 9;     //Define the pin of the LED
/**************************************/
void setup()
{
  pinMode(pin,OUTPUT); //initialize thisPin as an output
  Serial.begin(9600);
}
/****************************************/
void loop()
{
  digitalWrite(pin,HIGH);//turn this led on
  
    //read thermistor value
  long a = analogRead(analogPin);
  //the calculating formula of temperature
  float tempC = beta /(log((1025.0 * 10 / a - 10) / 10) + beta / 298.0) - 273.0;
  //float tempF = 1.8*tempC + 32.0;//convert centigrade to Fahrenheit
  Serial.print("TempC: ");//print" TempC: "
  Serial.print(tempC);//print Celsius temperature
  Serial.print(" C");//print the unit
  Serial.println();
  
  if(tempC > 26)
  {
    digitalWrite(pin,HIGH);//turn this led on
  }
  else
  {
    digitalWrite(pin, LOW);//turn this led off
  }
  delay(2000);
}


