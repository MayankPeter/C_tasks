#include<stdio.h>
void main()
{
int i,num,pow,sum=1;
printf("Enter the number\n");
scanf(" %d",&num);
printf("Enter the power\n");
scanf(" %d",&pow);

for(i=0;i<pow;i++)
{
sum = sum * num;
}

printf("%d times power of %d is %d\n",pow,num,sum);
}
