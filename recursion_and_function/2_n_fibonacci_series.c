#include<stdio.h>
void fab(int,int,int);
void main()
{
int i,a=0,b=1;
printf("Enter the numbers to print\n");
scanf(" %d",&i);

printf("%d %d ",a,b);

fab(a,b,i-2);
}

void fab(int a,int b,int n)
{
if(n>0)
{
int sum =0;
sum= a+b;
printf("%d ",sum);
a = b;
b = sum;
fab(a,b,n-1);
}
}
