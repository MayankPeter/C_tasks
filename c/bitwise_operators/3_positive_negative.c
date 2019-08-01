#include<stdio.h>
void main()
{

int num,status;
printf("Enter the number\n");
scanf("%d",&num);
status = num & 1<<31;
status?printf("Negative\n"):printf("Positive\n");


}
