#include<stdio.h>
void main()
{
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
/*
ch =ch^32;//toggle upper and lower

printf("%c\n",ch);
*/

/*
ch = ch&~32;//lower to upper

printf("%c\n",ch);
*/

ch = ch|32;//upper to lower

printf("%c\n",ch);

}
