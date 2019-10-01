#include<iostream>
using namespace std;
class A
{
int x;
int y;

public:
A();
A(int , int);
void get_data();
friend A operator -(const A &,const A &);
};

A::A(){}

A::A(int a,int b)
{
x = a, y = b;
}

void A::get_data()
{
cout << x << "\t" << y << endl;
}

A operator -(const A& a,const A &b)
{
A tmp;
tmp.x = a.x - b.x;
tmp.y = a.x - b.y;
return tmp;
}

using namespace std;
int main()
{
A a1(100,200),a2(10,20), a3(5,5), a4;
a4 = a1 - a2 - a3;
a1.get_data();
a2.get_data();
a3.get_data();

cout << endl << "Output :" << endl;
a4.get_data();
}
