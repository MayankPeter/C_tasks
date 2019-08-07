#include<stdio.h>
void main()
{
int i,j,k;

for(i=4;i>=0;i--)
{
for(j=-4;j<=5;j++)
{
k=j;
if(k<0)
k=-k;
if(k>=i)
printf("*");
else if(j==(-i) && i!=0)
printf(" ");
else
printf(" ");
}
printf("\n");
}

}
