#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character\n");
	scanf(" %c",&ch);
	switch(ch)
	{
		case 'A'...'Z':printf("Upper case\n");
			       break;
		case 'a'...'z':printf("Lower case\n");
			       break;
		default: printf("Invalid Entry\n");


	}


}
