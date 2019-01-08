#include<pic.h>
__CONFIG(0X2CE5);
#define _XTAL_FREQ 8000000
void delay(unsigned int b)
{
while(b--);
}
void main()
{
PORTA=0X00;
TRISA=0X00;
PORTB=0X00;
TRISB=0X00;
PORTC=0X00;
TRISC=0X00;
ANSEL=0X00;
ANSELH=0X00;
while(1)
{
PORTA=0Xff;
delay(1000);
PORTA=0x00;
delay(1000);
PORTB=0Xff;
delay(1000);
PORTB=0X00;
delay(1000);
PORTC=0Xff;
delay(1000);
PORTC=0X00;
delay(1000);
}
}