#include<stdio.h>
void main()
{
int i,j,k;
for(i=4;i>=0;i--)
{
for(j=-4;j<=4;j++)
{
k=j;
if(k<0)
k=-k;
if(k<i)
printf(" ");
else
printf("%d",5-k);
}

printf("\n");
}

}
