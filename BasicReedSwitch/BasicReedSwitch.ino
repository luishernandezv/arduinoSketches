#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,6);

const int switchPin = 2;
volatile int state;

void setup() {
 lcd.begin(16,2);
 pinMode(switchPin, INPUT);
 attachInterrupt(digitalPinToInterrupt(switchPin), stateChange, CHANGE);
}

void loop()
{

}

void stateChange()
{
  lcd.clear();
  state = digitalRead(switchPin);
  
  if(state == HIGH)
  {
    lcd.print("Washroom is being used");
  }
  else
  {
    lcd.print("Washroom is available");
  }
}

