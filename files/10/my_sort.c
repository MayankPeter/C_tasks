#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(int argc, char *argv[])
{
char s[200];
char **p,tmp[200];
int count=0,i,j;
FILE *fp = fopen(argv[1],"r");

while(fgets(s,200,fp))
count++;
rewind(fp);

p = malloc(sizeof(char *)*count);

for(i=0;i<count;i++)
p[i] = malloc(sizeof(s));

for(i=0;fgets(s,200,fp);i++)
strcpy(p[i],s);

for(i=0;i<count-1;i++)
{
for(j=0;j<count-1-i;j++)
if(strcmp(p[j],p[j+1])>0)
{
strcpy(tmp,p[j]);
strcpy(p[j],p[j+1]);
strcpy(p[j+1],tmp);
}
}

for(i=0;i<count;i++)
printf("%s",p[i]);
}
