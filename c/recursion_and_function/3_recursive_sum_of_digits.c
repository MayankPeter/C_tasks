#include<stdio.h>
void main()
{
int i,a;
printf("Enter the number\n");
scanf(" %d",&i);

a = sum(i);

printf("sum of digits are %d\n",a);
}

int sum(int n)
{
static int s = 0;
if(n>0)
{
s = s + n%10;
sum(n/10);
}
else
return s;

}
