#include<iostream>
using namespace std;
class wife;

class husb
{
int salary_h;

public:
void set()
{
cout << "enter husband's salary" << endl;
cin >> salary_h;
}

void get()
{
cout << "Entered salary is " << salary_h << endl;
}

friend int total(husb,wife);
};

class wife
{
int salary_w;

public:
void set()
{
cout << "enter wife's salary" << endl;
cin >> salary_w;
}

void get()
{
cout << "Entered salary is " << salary_w << endl;
}
friend int total(husb,wife);
};

int total(husb h, wife w)
{
int t = h.salary_h + w.salary_w;
return t;
}

int main()
{
int t;
husb h;
wife w;
h.set();
h.get();

w.set();
w.get();

t = total(h,w);
cout << "Total salary is " << t << endl;
}

