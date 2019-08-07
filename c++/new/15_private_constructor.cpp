#include<iostream>
using namespace std;

class A
{
int x;
int y;

A(){
x=10, y=20;
}

A(int a, int b)
{
x = a, y = b;
}

void get()
{
cout << x << "   " << y << endl;
}

public:
static void create_obj()
{
A a1,a2(100,200);
a1.get();
a2.get();
}
};

int main()
{
A::create_obj();
}
