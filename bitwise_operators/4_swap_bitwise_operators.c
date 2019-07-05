#include<stdio.h>
void main()
{

int i,j;
printf("Enter the two numbers\n");
scanf("%d %d",&i,&j);
i=i^j;
j=i^j;
i=i^j;

printf("i=%d j=%d",i,j);






}
