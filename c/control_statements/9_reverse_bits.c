#include<stdio.h>
void main()
{
int num,i,j;
printf("Enter a number\n");
scanf(" %d",&num);

for(i=sizeof(int)*8-1;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
//////////////////////////////////////////
for(i=0,j=31;i<j;i++,j--)
if((num>>i&1)!=(num>>j&1))
{
num = num^1<<i;
num = num^1<<j;
}


//////////////////////////////////////////
for(i=sizeof(int)*8-1;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
}
