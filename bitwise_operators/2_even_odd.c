#include<stdio.h>
void main()
{

int num;
printf("Enter the number\n");
scanf("%d",&num);
//num%2?printf("ODD\n"):printf("EVEN\n");
if(num>>0&1)
printf("Odd\n");
else
printf("Even\n");

}
