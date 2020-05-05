#include "pitches.h"

int tune[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4,
              NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4,
              NOTE_E4, NOTE_F4, NOTE_G4,
              NOTE_E4, NOTE_F4, NOTE_G4, 0,
              NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_C4,
              NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_C4,
              NOTE_D4, NOTE_G3, NOTE_C4,
              NOTE_D4, NOTE_G3, NOTE_C4};
              
float duration[] = {0.2, 0.2, 0.2, 0.2,
                    0.2, 0.2, 0.2, 0.2,
                    0.2, 0.2, 0.4, 0.2, 0.2, 0.4, 0.001,
                    0.132, 0.067, 0.132, 0.067, 0.2, 0.2,
                    0.132, 0.067, 0.132, 0.067, 0.2, 0.2,
                    0.2, 0.2, 0.4, 0.2, 0.2, 0.4};              
float length = sizeof(tune) / sizeof(tune[0]);

void setup() {
    pinMode(5, OUTPUT); 
}

void loop() {
  for (int x=0; x<length; x++) {
    tone(5,tune[x]);
    delay(2500 * duration[x]); 
    noTone(5);
  }
  delay(5000);
}



