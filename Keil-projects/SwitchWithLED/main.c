#include <reg51.h>

sbit LED = P1^1;
sbit BUTTON = P1^0;

void main(void)
{

    // Set Button as input and led as output
    BUTTON = 1;
    LED = 0;
    while(1)
    {
        if(BUTTON == 0) // when button is pressed
            LED = 1;
        else
            LED = 0;
    }
}
