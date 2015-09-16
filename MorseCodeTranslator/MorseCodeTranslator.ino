int switchState = 0;
int redLed = 3;
int yellowLed = 4;
int greenLed = 5;
int inputPin = 2;

char message[8] = "COLOMBO";

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(inputPin, INPUT);
  
}

void loop() {
  for(int i = 0; sizeof(message); i++ )
  {
    printMorseChar(message[i]);
  }

  endFrase();
}

void printMorseChar(char c)
{

  int ledPin = redLed;
  
  switch(c)
  {
    case 'a':
    case 'A':
        printDot(ledPin);
        printLine(ledPin);
        endLetter();
        break;
    case 'b':
    case 'B':
        printLine(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        endLetter();
        break;
    case 'c':
    case 'C':
        printLine(ledPin);
        printDot(ledPin);
        printLine(ledPin);
        printDot(ledPin);
        endLetter();
    case 'd':
    case 'D':
        printLine(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        endLetter();
    case 'e':
    case 'E':
        printDot(ledPin);
        endLetter();
    case 'f':
    case 'F':
        printDot(ledPin);
        printDot(ledPin);
        printLine(ledPin);
        printDot(ledPin);
        endLetter();
    case 'g':
    case 'G':
        printLine(ledPin);
        printLine(ledPin);
        printDot(ledPin);
        endLetter();
    case 'h':
    case 'H':
        printDot(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        endLetter();
    case 'i':
    case 'I':
        printDot(ledPin);
        printDot(ledPin);
        endLetter();
    case 'j':
    case 'J':
        printDot(ledPin);
        printLine(ledPin);
        printLine(ledPin);
        printLine(ledPin);
        endLetter();
    case 'k':
    case 'K':
        printLine(ledPin);
        printDot(ledPin);
        printLine(ledPin);
        endLetter();
    case 'l':
    case 'L':
        printDot(ledPin);
        printLine(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        endLetter();
    case 'm':
    case 'M':
        printLine(ledPin);
        printLine(ledPin);
        endLetter();
    case 'n':
    case 'N':
        printLine(ledPin);
        printDot(ledPin);
        endLetter();
    case 'o':
    case 'O':
        printLine(ledPin);
        printLine(ledPin);
        printLine(ledPin);
        endLetter();
    case 'p':
    case 'P':
        printDot(ledPin);
        printLine(ledPin);
        printLine(ledPin);
        printDot(ledPin);
        endLetter();
    case 'q':
    case 'Q':
        printLine(ledPin);
        printLine(ledPin);
        printDot(ledPin);
        printLine(ledPin);
        endLetter();
    case 'r':
    case 'R':
        printDot(ledPin);
        printLine(ledPin);
        printDot(ledPin);
        endLetter();
    case 's':
    case 'S':
        printDot(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        endLetter();
    case 't':
    case 'T':
        printLine(ledPin);
        endLetter();
    case 'u':
    case 'U':
        printDot(ledPin);
        printDot(ledPin);
        printLine(ledPin);
        endLetter();
    case 'v':
    case 'V':
        printDot(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        printLine(ledPin);
        endLetter();
    case 'w':
    case 'W':
        printDot(ledPin);
        printLine(ledPin);
        printLine(ledPin);
        endLetter();
    case 'x':
    case 'X':
        printLine(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        printLine(ledPin);
        endLetter();
    case 'y':
    case 'Y':
        printLine(ledPin);
        printDot(ledPin);
        printLine(ledPin);
        printLine(ledPin);
        endLetter();
    case 'z':
    case 'Z':
        printLine(ledPin);
        printLine(ledPin);
        printDot(ledPin);
        printDot(ledPin);
        endLetter();
  }
}


void printDot(int ledPin)
{
  digitalWrite(ledPin, HIGH);
  delay(300);
  digitalWrite(ledPin, LOW);
  delay(500);
}

void printLine(int ledPin)
{
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(500);
}


void endLetter(){
  delay(1000);
}

void endFrase(){
  delay(5000);
}


