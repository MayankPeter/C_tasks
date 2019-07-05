#include<stdio.h>
int fact(int );
void main()
{
int i;
i = fact(5);
printf("Factorial is %d\n",i);
}

int fact(int i)
{
if(i<1)
return 1;
else
return i * fact(i-1);

}
