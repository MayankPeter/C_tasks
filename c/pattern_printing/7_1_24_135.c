#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<6;i++)
{
if(i%2)
k=2;
else
k=1;

for(j=0;j<=i;j++,k+=2)
printf("%d ",k);


printf("\n"); 
}
}
