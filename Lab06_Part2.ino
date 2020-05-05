#include "pitches.h"

int tune4[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4};
int tune5[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5};

#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
  {'C', 'D', 'E', 'F'}, {'9','6','3', 'B'},
  {'8', '5', '2', 'A'}, {'7', '4', '1', '0'}
};
byte rowPins[ROWS] = {16, 15, 14, 13};
byte colPins[COLS] = {12, 11, 10, 9};
Keypad keypad = Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS);

int index;
char key;

void setup() {
    pinMode(5, OUTPUT);
}

void loop() {
  key = keypad.getKey();
  if((key-'1')>=0 && (key-'7')<=0) {
    index = key - '1';
    if(key != NO_KEY) {
      tone(5,tune4[index],500);
    }
  }
  else if((key-'A')>=0 && (key-'F')<=0) {
    index = key - 'A';
    if(key != NO_KEY) {
      tone(5,tune5[index],500);
    }
  }
}

