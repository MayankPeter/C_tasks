#include<stdio.h>
void main()
{
int num,pos,sum,bits,t1,t2,i;
printf("Enter the number\n");
scanf("%d",&num);
printf("Enter the position to delete from\n");
scanf("%d",&pos);
printf("Enter the number of bits to delete\n");
scanf("%d",&bits);

for(i=sizeof(int)*8-1;i>=0;i--)
 printf("%d",num>>i&1);
printf("\n");
//////////////////////////////////////////////////////

pos -= 1;
sum = pos+bits;
t1 = num>>sum;
t1 = t1<<pos;


t2 = num<<(31-pos);
t2 = t2>>(31-pos);

num = t1 | t2;

//////////////////////////////////////////////////////
for(i=sizeof(int)*8-1;i>=0;i--)
 printf("%d",num>>i&1);
printf("\n");



}
