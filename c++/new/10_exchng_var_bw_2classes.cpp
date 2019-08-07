#include<iostream>
using namespace std;
class A;
class B;

/******A member function*******/
void A::set_data_A()
{
p = 10, q = 20;
}

void A::get_data_A()
{
cout << p << "  " << q << endl;
}

/******B member function*******/
void B::set_data_B()
{
x = 100,y = 200;
}

void B::get_data_B()
{
cout << x << "  " << y << endl;
}

class A
{
int p;
int q;

public:

void set_data_A();
void get_data_A();
friend void B::get_data_B();
};

class B
{
int x;
int y;

public:
void set_data_B();
void get_data_B();
friend void A::get_data_A();
};

int main()
{
A a1;
B b1;

a1.set_data_A();
b1.set_data_B();

a1.get_data_A();
b1.get_data_B();
}
