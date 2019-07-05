#include<stdio.h>
#include<string.h>
char *find_str(char *,char *);
void main()
{
int i;
char s1[20],s2[20],s3[20];
char *p;
printf("Enter the two strings\n");
scanf(" %s",s1);
scanf(" %[^\n]",s2);

printf("Enter the word to replace\n");
scanf(" %s",s3);

p = find_str(s2,s1);

for(i=0;s3[i];i++)
p[i] = s3[i];

printf("%s ",s2);

}


char *find_str(char *s,char *c)
{
int i,j;

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
return s[i];
}
}
}
