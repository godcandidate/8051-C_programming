#include <reg51.h>
#define LED P2
/**
 *  MSDelay - delays in milliseconds
 *  @itime: The time to delay in milliseconds
 *
 *  Return: void
 */
void MSDelay(unsigned int itime)
{
    unsigned int i,j;
    for (i=0;i<itime;i++)
        for (j=0;j<1275;j++);
}

void main(void)
{
		unsigned char i;
		for(i=0; i<5; i++)
		{
				LED = 0xFF;
				MSDelay(100);
				LED = 0X00;
				MSDelay(100);
		}
		
		for(i=0; i<5; i++)
		{
				LED = 0x55;
				MSDelay(100);
				LED = 0xAA;
				MSDelay(100);
		}

}