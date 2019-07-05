#include<stdio.h>
void main()
{
char t,s[40];
int l=0,len,j,i,k;

printf("Enter the string\n");
scanf(" %[^\n]",s);

for(i=0;s[i];i++);
len = i;

for(i=0;i<=len;i++)
{
if(s[i]==' ' || s[i]=='\0')
{
for(j=l,k=i-1;j<k;j++,k--)
{
t = s[j];
s[j] = s[k];
s[k] = t;
}
l = i + 1;
}
}
printf("%s\n",s);
}
