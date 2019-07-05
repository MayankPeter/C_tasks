#include<stdio.h>
void main()
{
char s[40];
int i,j;
printf("Enter the string\n");
scanf(" %[^\n]",s);

for(i=0;s[i];i++)
{

if(s[i]==' ' && s[i+1]==' ')
for(j=i+1;s[j];j++)
{
s[j] = s[j+1];
}

}

printf("%s\n",s);

}
