#include<stdio.h>
void print_words(int );
void main()
{
int n;
printf("Enter the number\n");
scanf(" %d",&n);

print_words(n);
printf("\n");
}

void print_words(int n)
{

if(n)
{
print_words(n/10);
switch(n%10)
{

case 0:printf("zero ");
		break;
case 1:printf("one ");
		break;
case 2:printf("two ");
		break;
case 3:printf("three ");
		break;
case 4:printf("four ");
		break;
case 5:printf("five ");
		break;
case 6:printf("six ");
		break;
case 7:printf("seven ");
		break;
case 8:printf("eight ");
		break;
case 9:printf("nine ");
		break;
}
}
}
