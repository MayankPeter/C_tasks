#include<stdio.h>
void main()
{
int sum=0,i,num;
printf("Enter the number\n");
scanf(" %d",&num);

for(i=1;i<num;i++)
if(num%i==0)
{
sum = sum + i;
}

if(sum==num)
printf("Perfect number\n");
else
printf("Not a perfect number\n");
}
