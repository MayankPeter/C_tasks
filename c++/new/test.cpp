#include<iostream>
using namespace std;

class A
{
string str;

public:
void set_data()
{
cout << "Enter the string" << endl;
getline(cin,str);
}

void get_data()
{
cout << str << endl;
}
};

int main()
{
A a1;
a1.set_data();
a1.get_data();

}
