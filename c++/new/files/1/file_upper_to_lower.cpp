#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream fin("data");
char ch;

while((ch=fin.get())!=EOF)
{
if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z'))
ch ^= 32;
fin.seekp(-1,ios::cur);
fin << ch;
}
}
