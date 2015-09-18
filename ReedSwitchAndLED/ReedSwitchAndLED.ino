const int switchPin = 2;
const int ledPin = 3;
volatile int state;

void setup() {
 pinMode(switchPin, INPUT);
 pinMode(ledPin, OUTPUT);
 attachInterrupt(digitalPinToInterrupt(switchPin), stateChange, CHANGE);
}

void loop()
{

}

void stateChange()
{
  state = digitalRead(switchPin);
  
  if(state == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
}

