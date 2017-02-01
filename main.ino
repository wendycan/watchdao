#include "gokit.h"

void setup() {
    pinMode(KEY1, INPUT_PULLUP);
    pinMode(KEY2, INPUT_PULLUP);
    pinMode(LED1, OUTPUT);
}

void loop() {
    if(gokit_keydown(KEY1, KEY1_SHORT_PRESS) == KEY1_SHORT_PRESS) {
        digitalWrite(LED1, HIGH);
    }
    if(gokit_keydown(KEY2, KEY2_SHORT_PRESS) == KEY2_SHORT_PRESS){
        digitalWrite(LED1, LOW);
    }
}
