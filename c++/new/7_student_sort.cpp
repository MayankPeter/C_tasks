/* sorting student */
#include<iostream>
#include<cstring>
using namespace std;

class student
{
	int roll;
	char name[20];
	float marks;

	public:
	void set_data();
	void display();
	void sort();
};

void student::set_data()
{
	cout << "Enter roll no, name & marks"  << endl;
	cin >> roll >> name >> marks;
}

void student::display()
{
	cout << "Entered data is: " << endl;
	cout << roll << "   " << name << "   " << marks << endl;
}

void student::sort()
{
	student *a[5] = {this,this+1,this+2,this+3,this+4};
	int n;
	student tmp;

	cout << "Enter your sorting criterion:" << endl <<"1) rollno" << endl << "2) Name" << endl << "3) Marks" << endl;
	cin >> n;

	if(n==1)
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4-i;j++)
			{
				if(a[j]->roll>a[j+1]->roll)
				{
					tmp = *a[j];
					*a[j] = *a[j+1];
					*a[j+1] = tmp;
				}
			}
		}
	}

	else if(n==2)
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4-i;j++)
			{
				if(strcmp(a[j]->name,a[j+1]->name)>0)
				{
					tmp = *a[j];
					*a[j] = *a[j+1];
					*a[j+1] = tmp;
				}
			}
		}
	}
	
	else if(n==3)
	{
		for(int i=0;i<4;i++)
		{
			for(int j=0;j<4-i;j++)
			{
				if(a[j]->marks,a[j+1]->marks)
				{
					tmp = *a[j];
					*a[j] = *a[j+1];
					*a[j+1] = tmp;
				}
			}
		}
	}
}

int main()
{
	student a[5];

	for(int i=0;i<5;i++)
		a[i].set_data();

	for(int i=0;i<5;i++)
		a[i].display();
	
	cout << endl;

	a[0].sort();

	cout << endl;

	for(int i=0;i<5;i++)
		a[i].display();

	
}
