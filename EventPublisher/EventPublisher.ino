const int switchPin = D4;
const int ledPin = D7;

int state;
volatile bool stateChanged = false;

void setup()
{
    attachInterrupt(switchPin, stateChangeHandler, CHANGE);
    pinMode(switchPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
    state = LOW;
}

void loop()
{
    if(stateChanged)
    {
        stateChanged = false;
        state = digitalRead(switchPin);
        if( state == HIGH ) {
            digitalWrite(ledPin, HIGH);
            Spark.publish("doorState", "CLOSED");
        }
        else {
            digitalWrite(ledPin, LOW);
            Spark.publish("doorState", "OPEN");
        }
    }
}

void stateChangeHandler()
{
    stateChanged = true;
}
