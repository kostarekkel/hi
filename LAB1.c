#include <stdio.h>
#include <wiringPi.h>
#define LED 0
int main(void)
{
printf ("Raspberry Pi blink\n");
wiringPiSetup ();
pinMode (LED, OUTPUT);
for (;;)
{
digitalWrite (LED, HIGH);
delay (500);
digitalWrite (LED, LOW);
delay (500);
}
//resghfdfurtgw
return 0;
}
