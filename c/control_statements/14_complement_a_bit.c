#include<stdio.h>
void main()
{
int i,pos,num;
printf("Enter a number\n");
scanf(" %d",&num);
printf("Enter the position to complement\n");
scanf(" %d",&pos);

for(i=31;i>=0;i--)
printf("%d",num>>i&1);

num = num^1<<pos;
printf("\nafter complement\n");

for(i=31;i>=0;i--)
printf("%d",num>>i&1);

printf("\n");
}
