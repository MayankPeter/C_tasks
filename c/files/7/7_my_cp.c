#include<stdio.h>
void main(int argc,char *argv[])
{
if(argc<3)
{
printf("Usage: ./a.out <source> <dest1> <dest2>...\n");
return;
}
int i;
char ch;
FILE *fp = fopen(argv[1],"r");
if(fp==NULL)
{
printf("file not found\n");
return;
}
FILE *fd;

for(i=2;i<argc;i++)
{
fd = fopen(argv[i],"w");
while((ch=fgetc(fp))!=-1)
{
fputc(ch,fd);
}
rewind(fp);
}
}
