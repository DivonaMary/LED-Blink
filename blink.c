#include<reg51.h>
void delay(int);
#define led P1
void main()
{
	while(1)
	{
		led=0x00;
		delay(10000);
		led=0xFF;
		delay(10000);
	}
}
void delay(int a)
{
	int i,j;
	for(i=0;i<=a;i++);
}
		