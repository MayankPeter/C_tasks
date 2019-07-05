#include<stdio.h>
void main()
{
int num,i;
printf("Enter the number\n");
scanf(" %d",&num);

i = rev(num);

printf("rev = %d\n",i);
}

int rev(int num)
{
static int sum = 0;
if(num>0)
{
sum = sum*10 + num%10;
rev(num/10);
}
else
return sum;
}
