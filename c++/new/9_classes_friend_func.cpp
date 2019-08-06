#include<iostream>
using namespace std;
class A
{
int a;
int b;
public:
friend void set_data(A&);
friend void read_data(A&);
};

class B
{
int a;
int b;
public:
friend void set_data(B&);
friend void read_data(B&);
};

class C
{
int a;
int b;
public:
friend void set_data(C&);
friend void read_data(C&);
};


void set_data(A &a1)
{
cout << "Enter Data : " << endl;
cin >> a1.a >> a1.b;
}

void set_data(B &b1)
{
cout << "Enter Data : " << endl;
cin >> b1.a >> b1.b;
}

void set_data(C &c1)
{
cout << "Enter Data : " << endl;
cin >> c1.a >> c1.b;
}


void read_data(A &a1)
{
cout << "read_data : " << a1.a << "  " << a1.b << endl;
}

void read_data(B &b1)
{
cout << "read_data : " << b1.a << "  " << b1.b << endl;
}

void read_data(C &c1)
{
cout << "read_data : " << c1.a << "  " << c1.b << endl;
}


int main()
{
A a1;
B b1;
C c1;

cout << "a1 :" << endl;
set_data(a1);
read_data(a1);
cout << endl;

cout << "b1 :" << endl;
set_data(b1);
read_data(b1);
cout << endl;

cout << "c1 :" << endl;
set_data(c1);
read_data(c1);
cout << endl;

return 0;
}
