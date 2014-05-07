int LED = 7;
int sensor = 5;

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(sensor, INPUT);
}

void loop()
{
	if(digitalRead(sensor) == HIGH)
	{
		digitalWrite(LED, HIGH);
	}
	else
	{
		digitalWrite(LED, LOW);
	}
}