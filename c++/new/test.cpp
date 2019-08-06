#include<iostream>
using namespace std;

class A
{
int x;
public:
/*
A()
{
cout << "default" << endl;
x = 10;
}
*/
A(int a):x(a)
{
cout << "parameterized" << endl;
}

void get()
{
cout << "x = " << x << endl;
}
};

int main()
{
A a1();
//a1.get();
A a2(20);
a2.get();
return 0;
}
