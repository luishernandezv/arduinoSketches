#include <string>

const int ledPin = D7;
void setup()
{
    pinMode(ledPin, OUTPUT);
    Spark.subscribe("doorState", eventHandler);
    Serial.begin(9600);
}

void eventHandler(const char *eventName, const char *data) {
    Serial.println("Received event");
    Serial.println(data);
    String result = String(data);
    
    if(result.compareTo("CLOSED") == 0)
        digitalWrite(ledPin, HIGH);
    else if(result.compareTo("OPEN") == 0)
        digitalWrite(ledPin, LOW);  
}
