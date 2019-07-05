#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<5;i++)
{
for(j=0;j<=(i*2);j++)
{
if(j%2)
printf("*");
else
printf("%d",i+1);
}
printf("\n");
}

for(i=4;i>0;i--)
{
for(j=0;j<(i*2)-1;j++)
if(j%2)
printf("*");
else
printf("%d",i);

printf("\n");
}
}
