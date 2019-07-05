#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
if(argc!=3)
{
printf("Usage: ./a.out <filename> <string>\n");
return;
}

FILE *fp = fopen(argv[1],"r+");
char s[20],t,s1[20];
int j,i,len;
if(fp==0)
{
printf("filel not found\n");
return;
}

strcpy(s,argv[2]);

for(i=0;s[i];i++);
len = i;

for(j=0,i=i-1;j<i;j++,i--)
{
t = s[j];
s[j] = s[i];
s[i] = t;
}

while(fscanf(fp,"%s",s1)!=-1)
{
if(strcmp(s1,argv[2])==0)
{
fseek(fp,-len,SEEK_CUR);
fprintf(fp,"%s",s);
}
}
rewind(fp);

while(fscanf(fp,"%s",s1)!=-1)
fprintf(stdout,"%s",s1);
}
