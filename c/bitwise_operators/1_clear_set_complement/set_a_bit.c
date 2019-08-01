#include<stdio.h>
void main()
{

int i,j;
printf("Enter the number\n");
scanf("%d",&i);
printf("Enter the position\n");
scanf("%d",&j);
i |= 1<<j;
printf("number after shifting %d\n",i);


}
