
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    uLCD.background_color(0xFFFFFF);
    uLCD.textbackground_color(0xFFFFFF);
    uLCD.color(BLUE);
    uLCD.locate(0, 0);
    uLCD.text_width(2);
    uLCD.text_height(4);
    uLCD.printf("108061233\n");
    uLCD.color(GREEN);
    uLCD.text_width(4);
    uLCD.text_height(4);
    uLCD.background_color(0xFFFFFF);
    uLCD.textbackground_color(0xFFFFFF);
    for (int x = 30; x >= 0; x--)
    {
        uLCD.locate(1,2);
        uLCD.printf("%2d",x);
        ThisThread::sleep_for(500ms);       
    }
    return 0;
}