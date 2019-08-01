#include<stdio.h>
void main()
{
int num,i,j,k;
printf("Enter the number\n");
scanf("%d",&num);

for(i=31;i>=0;i--)
printf("%d",num>>i&1);

printf("\n");
//////////////////////////////////////////
for(j=3,k=31;j>=0;j--,k--)
{
if((num>>j&1)!=(num>>k&1))
{
num ^= 1<<j;
num ^= 1<<k;
}
}
//////////////////////////////////////////

for(i=31;i>=0;i--)
printf("%d",num>>i&1);

printf("\n");

}
