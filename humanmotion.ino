int LED = 7;
int sensor = 5;
int buzzer = 6;

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(sensor, INPUT);
	pinMode(buzzer, OUTPUT);
}

void loop()
{
	if(digitalRead(sensor) == HIGH)
	{
		digitalWrite(LED, HIGH);
		digitalWrite(buzzer, HIGH);
		delay(5);
		digitalWrite(buzzer, LOW);
		delay(5);
	}
	else
	{
		digitalWrite(LED, LOW);
		digitalWrite(buzzer, LOW);
	}
}