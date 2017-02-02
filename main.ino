#include "gokit.h"
#include "ChainableLED.h"

ChainableLED leds(A5, A4, 1);

void setup() {
    pinMode(KEY1, INPUT_PULLUP);
    pinMode(KEY2, INPUT_PULLUP);

    leds.init();
    // 使能 RGB LED
    digitalWrite(A0, HIGH);
}

void loop() {
    if(gokit_keydown(KEY1, KEY1_SHORT_PRESS) == KEY1_SHORT_PRESS) {
        set_led_color(0, 50, 0);
    }
    if(gokit_keydown(KEY2, KEY2_SHORT_PRESS) == KEY2_SHORT_PRESS){
        set_led_color(50, 0, 0);
    }
}

void set_led_color(byte red, byte green, byte blue) {
    leds.setColorRGB(0, red, green, blue);
}
