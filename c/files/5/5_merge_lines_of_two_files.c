#include<stdio.h>
void main(int argc,char *argv[])
{
if(argc!=4)
{
printf("Usage: ./a.out <firstfile> <secfile> <destfile>\n");
return;
}

FILE *fp1 = fopen(argv[1],"r");
FILE *fp2 = fopen(argv[2],"r");
FILE *fd = fopen(argv[3],"w");
char ch;

if(fp1==0)
{
printf("first file not found\n");
return;
}
else if(fp2==0)
{
printf("second file not found\n");
return;
}

while((ch=fgetc(fp1))!=-1)
fputc(ch,fd);
while((ch=fgetc(fp2))!=-1)
fputc(ch,fd);

}
