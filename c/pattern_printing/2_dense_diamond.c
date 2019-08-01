#include<stdio.h>
void main()
{
int i,j,k;
for(i=0;i<7;i++)
{
for(j=0;j<6-i;j++)
printf(" ");
for(k=0;k<=2*i;k++)
printf("*");

printf("\n");
}

for(i=0;i<6;i++)
{
for(j=0;j<=i;j++)
printf(" ");
for(k=0;k<11-(2*i);k++)
printf("*");

printf("\n");
}

}
