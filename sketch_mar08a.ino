void setup()
{
Serial.begin(9600);//Set the baudrate to 115200,same as the software settings
}
void loop()
{
Serial.println("Skuska_Hello World!");//Print character string“Hello World！”on the serial
delay(5000);// Delay 5 second
}
