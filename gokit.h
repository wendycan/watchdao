#define   PIN0            0
#define   PIN1            1
#define   KEY1            6
#define   KEY2            7
#define   LED1            13
#define   KEY1_SHORT_PRESS  1
#define   KEY2_SHORT_PRESS  4
// #define   KEY1_LONG_PRESS   2
// #define   KEY2_LONG_PRESS   8
#define   NO_KEY            0
#define   KEY_LONG_TIMER    3   //( 3s )

char gokit_keydown(int key, int short_press);
unsigned long gokit_time_s();
