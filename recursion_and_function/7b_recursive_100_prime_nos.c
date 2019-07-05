#include<stdio.h>
int print_prime(int ,int );
void main()
{
int c=0,num,i,remark;
printf("first 100 prime no:\n");
for(num=2;c<100;num++)
{
remark = print_prime(num,num/2);
if(remark==1)
{
printf("%d ",num);
c++;
}
}
printf("\n");
}

int print_prime(int num,int max)
{
if(max==1)
return 1;
else
{
if(num%max==0)
return 0;
else
print_prime(num,max-1);
}
}
