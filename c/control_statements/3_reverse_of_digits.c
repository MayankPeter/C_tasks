#include<stdio.h>
void main()
{
int num,sum;
printf("Enter the number\n");
scanf("%d",&num);

for(sum=0;num;num=num/10)
sum = sum*10 + num%10;

printf("%d\n",sum);

}
