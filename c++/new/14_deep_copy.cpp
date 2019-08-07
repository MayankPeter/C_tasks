#include<iostream>
#include<cstring>
using namespace std;

class deep
{
char *s;

public:
deep()
{
cout << "Default" << endl;
}

deep(const char *ptr)
{
cout << "deep" << endl;
s = new char[strlen(ptr) + 1];
strcpy(s,ptr);
}

deep(deep &a)
{
s = new char[strlen(a.s) + 1];
strcpy(s,a.s);
}

void modify()
{
s[0] = 'H';
}

void get()
{
cout << "string - " << s << endl;
}
};

int main()
{
deep s1("Mayank"), s2(s1);
s1.get();
s2.get();

cout << &s1 << "  " << &s2 << endl;

s1.modify();

s1.get();
s2.get();
}
