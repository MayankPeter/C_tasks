#include<stdio.h>
void rev_word(char *);
void rev_str(char *);
void main()
{
char t,s[40];

printf("Enter the string\n");
scanf(" %[^\n]",s);

rev_word(s);
rev_str(s);

printf("%s\n",s);
}

void rev_word(char *s)
{
int l=0,len,j,i,k;
char t;

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
}

void rev_str(char *s)
{
int i,j;
char t;
for(i=0;s[i];i++);

for(j=0,i=i-1;j<i;j++,i--)
{
t = s[j];
s[j] = s[i];
s[i] = t;
}
}

