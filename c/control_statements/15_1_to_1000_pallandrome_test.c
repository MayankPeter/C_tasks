#include<stdio.h>
void main()
{
int sum,i,end,num;
printf("Enter the last value\n");
scanf("%d",&end);

for(i=1;i<=end;sum=0,i++)
{
num=i;
while(num)
{
sum = sum*10 + num%10;
num=num/10;
}

if(sum==i)
printf("%d ",i);

}
}
