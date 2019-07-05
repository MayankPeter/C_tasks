#include<stdio.h>
void main()
{
int num,i,count;
for(num=2,count=0;count<100;num++)
{
for(i=2;i<num;i++)
{
if(num%i==0)
break;
}

if(num==i)
{
//printf("%d ",num);
count++;
printf("count = %d prime = %d\n",count,num);
}
}

}
