#include<stdio.h>
void main()
{
int num,i,end,sum;
printf("Enter the ending value\n");
scanf("%d",&end);

for(i=0;i<=end;sum=0,i++)
{
num = i;
while(num)
{ 
sum = sum*10 + num%10;
num=num/10;
}
if(sum==i)
printf("%d ",sum);

}
printf("\n");
}
