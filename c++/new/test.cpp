#include<iostream>
using namespace std;

class A
{
char *ptr;

public:
void set_data()
{
ptr = new char[20];
scanf(" %s",ptr);
}

void get_data()
{
cout << ptr << endl;
}
};

int main()
{
A a1;
a1.set_data();
a1.get_data();

}
