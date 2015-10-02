/* This is my first arduino project for cs lab 207 the program uses international morse code timings
 * at 700 hz frequency on and pin 4 for the peizo speaker. can type in a messge through serial monitor and it will 
 * play tones back at a unit time of 240. 
 * 
 * Note this is my 1st edition of the morse code machine for arduino and will be implementing morse code through blinker
 * along with the tones and also some code optimization to play numbers and also convert lowercase int uppercase.
 * Version 1a.
 */

int maxmsg;
int letter;
const int piezo_pin = 4;
const int uTime = 240;
char morse_code[255];


void setup() {
  // put your setup code here, to run once:
 pinMode(piezo_pin, OUTPUT);
  /* begins serial monitor listening */
 Serial.begin(9600);                                                           
 Serial.println("Please enter in your msg to be played in morse: "); 
}

void loop() {
  /* if statement waiting on input form serial monitor */
  if (Serial.available()){
    morse_code[maxmsg] = Serial.read();
    Serial.write(morse_code[maxmsg]);
    letter = maxmsg;
    for(maxmsg = 0; maxmsg <= letter; maxmsg++){
      the_code(morse_code[maxmsg]);
      delay(uTime*2);
    }
    maxmsg=0;
  }
}

void the_code(char morsecode){
switch (morsecode){
    case 'a':
      dot();dash; return;
    case 'b':
      dash();dot();dot();dot(); return;
    case 'c':
      dash();dot();dash();dot(); return;
    case 'd':
      dash();dot();dot(); return;
    case 'e':
      dot();return;
    case 'f':
      dot();dot();dash();dot(); return;
    case 'g':
      dash();dash();dot(); return;
    case 'h':
      dot();dot();dot();dot(); return;
    case 'i':
      dot();dot(); return;
    case 'j':
      dot;dash();dash();dash(); return;
    case 'k':
      dash();dot();dash(); return;
    case 'l':
      dot();dash();dot();dot(); return;
    case 'm':
      dash();dash(); return;
    case 'n':
      dash();dot(); return;
    case 'o':
      dash();dash();dash(); return;
    case 'p':
      dot();dash();dash();dot(); return;
    case 'q':
      dash();dash();dot();dash(); return;
    case 'r':
      dot();dash();dot(); return;
    case 's':
      dot();dot();dot(); return;
    case 't':
      dash(); return;
    case 'u':
      dot();dot();dash(); return;
    case 'v':
      dot();dot();dot();dash(); return;
    case 'w':
      dot();dash();dash(); return;
    case 'x':
      dash();dot();dot();dash(); return;
    case 'y':
      dash();dot();dash();dash(); return;
    case 'z':
      dash();dash();dot();dot(); return;
    case ' ': break;
      delay(uTime*7);
}
}

/* plays tone on dots */
void dot(){
  tone(piezo_pin, 700);
  delay(uTime);
  noTone(piezo_pin);
  delay(uTime);
}

/* plays tone on dash*/
void dash(){
  tone(piezo_pin, 700);
  delay(uTime*3);
  noTone(piezo_pin);
  delay(uTime);
}

