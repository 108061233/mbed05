#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
    int x;
    lcd.printf("108061233\n");
    for (x = 30; x >= 0; x--) 
    {
        lcd.locate(1, 2);
        lcd.printf("%5i", x);
        ThisThread::sleep_for(1s);
    }
    return 0;
}