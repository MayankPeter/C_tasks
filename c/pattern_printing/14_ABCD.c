#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<=6;i++)
{
for(j=-6;j<=6;j++)
{
k=j;
if(k<0)
k=-k;
if(i>k)
printf(" ");
else
printf("%c",'G'-k);
}
printf("\n");
}
}
