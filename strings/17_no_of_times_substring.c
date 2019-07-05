#include<stdio.h>
void main()
{
char s[20],c[20];
int i,j,count=0;

printf("Enter two strings\n");
scanf(" %s%s",s,c);

for(i=0;s[i];i++)
{
if(s[i]==c[0])
{
for(j=1;c[j];j++)
{
if(c[j]!=s[i+j])
break;
}
if(c[j]=='\0')
count++;
}
}

printf("Count = %d\n",count);
}
