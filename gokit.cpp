#include <Arduino.h>
#include "gokit.h"

// 获取指定开关的状态
char gokit_keydown(int key, int short_press) {
    int unsigned long keep_time = 0;
    if( digitalRead(key) == LOW) {
        delay(100);
        if(digitalRead(key) == LOW) {
            keep_time = gokit_time_s();
            while(digitalRead(key) == LOW) {
                if( (gokit_time_s() - keep_time) > short_press * 2) {
                    return short_press * 2;
                }
            }
            return short_press;
        }
        return 0;
    }
    return 0;
}

unsigned long gokit_time_s() {
    return millis() / 1000;
}
