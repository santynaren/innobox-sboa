int sample_pin = 13; // initialization
void setup()//main function ( executes one time )
{
// Declaration
pinMode(sample_pin,OUTPUT); 
//Begins serial communication
Serial.begin(9600);
}
void loop()//function that executes multiple times
{
// print function
Serial.print("Hello SBOA ");
// LED ON
digitalWrite(sample_pin,HIGH); 
// wait for 2 Seconds
delay(2000); 
// LED OFF
digitalWrite(sample_pin,LOW); 
// wait for 2 seconds
delay(2000); 
}
