#include<iostream>
#include<cstring>
using namespace std;

class shallow
{
	char *s;

	public:
	shallow()
	{
		cout << "Default" << endl;
	}

	shallow(const char *ptr)
	{
		cout << "shallow" << endl;
		s = new char[strlen(ptr) + 1];
		strcpy(s,ptr);
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
	shallow s1("Mayank"), s2(s1);
	s1.get();
	s2.get();

	s1.modify();

	s1.get();
	s2.get();
}
