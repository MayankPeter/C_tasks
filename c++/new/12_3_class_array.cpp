#include<iostream>
using namespace std;
class C;
class B;

class A
{
	int a[5];

	public:
	void set()
	{
		cout << "Enter A's five element:" << endl;
		for(int i=0;i<5;i++)
			cin >> a[i];
	}

	friend void set_c(A,B,C&);
	friend void get_data();

	void get_data()
	{
		cout << "Data: " << endl;
		for(int i=0;i<5;i++)
			cout << a[i] << " ";
		cout << endl;
	}

};

class B
{
	int a[5];

	public:
	void set()
	{
		cout << "Enter B's five element:" << endl;
		for(int i=0;i<5;i++)
			cin >> a[i];
	}

	friend void set_c(A,B,C&);
	friend void get_data();

	void get_data()
	{
		cout << "Data: " << endl;
		for(int i=0;i<5;i++)
			cout << a[i] << " ";
	cout << endl;
	}

};

class C
{
	int a[5];

	public:
	friend void set_c(A,B,C&);

	void get_data()
	{
		cout << "Data: " << endl;
		for(int i=0;i<5;i++)
			cout << a[i]<< " ";
		cout << endl;
	}
	

};

void set_c(A a,B b,C &c)
{
	for(int i=0; i<5 ; i++)
		c.a[i] = a.a[i] + b.a[i];
}


int main()
{
	A a;
	B b;
	C c;
	a.set();
	a.get_data();

	b.set();
	b.get_data();

	set_c(a,b,c);
	c.get_data();
}
