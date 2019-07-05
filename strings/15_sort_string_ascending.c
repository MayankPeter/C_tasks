#include<stdio.h>
void main()
{
char s[20],t;
int ele,i,j;
printf("Enter the string\n");
scanf(" %s",s);

for(ele=0;s[ele];ele++);

for(i=0;i<ele-1;i++)
{
for(j=0;j<ele-1-i;j++)
{
if(s[j]>s[j+1])
{
t = s[j];
s[j] = s[j+1];
s[j+1] = t;
}
}
}

printf(".......After sorting.....\n");
printf("%s\n",s);

}
