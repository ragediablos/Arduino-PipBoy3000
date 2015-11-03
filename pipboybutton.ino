
/* button code for change screen on pipboy WIP
 *  
 */
const int buttonPin = 2;    
const int buttonPin2 = 3;
const int ledPin =  13;      
const int ledPin2 = 12;

int buttonState = 0;        
int buttonState1 = 0;
void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
 
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin2);


  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, LOW);
  }
  else if (buttonState1 == HIGH){
  
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, HIGH);
  }
  }
}
