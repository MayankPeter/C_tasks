#include<stdio.h>
void main()
{
short int i = 0x1234;
i = i>>8 | i<<8;

printf("%x\n",i);

}
