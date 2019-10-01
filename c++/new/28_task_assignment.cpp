#include<iostream>
using namespace std;


class student
{
int roll;
char branch[10];

public:

student()
{
cout << "student constructor" << endl;
set();
}

void set()
{
cout << "Enter roll number and branch" << endl;
cin >> roll >> branch;
}

void get()
{
cout << roll << " " << branch << endl;
}
};



class Internal_Exam:virtual public student
{
protected:
float isub1_mark;
float isub2_mark;

public:
Internal_Exam()
{
cout << "Internal_Exam Constructor" << endl;
set();
}


void set()
{
cout << "Enter Internal subject 1 and subject 2 marks" << endl;
cin >> isub1_mark >> isub2_mark;
}

void get()
{
cout << isub1_mark << "   " << isub2_mark << endl;
}
};



class External_Exam:virtual public student
{
protected:
float esub1_mark;
float esub2_mark;

public:

External_Exam()
{
cout << "External Exam constructor" << endl;
set();
}

void set()
{
cout << "Enter External subject 1 and subject 2 marks" << endl;
cin >> esub1_mark  >> esub2_mark;
}

void get()
{
cout << esub1_mark << "   " << esub2_mark << endl;
}
};



class result:public Internal_Exam,public External_Exam
{
float total_marks;

public:

result():student(),Internal_Exam(),External_Exam()
{
set();
}

void set()
{
total_marks = Internal_Exam::isub1_mark + Internal_Exam::isub2_mark + External_Exam::esub1_mark + External_Exam::esub2_mark;
}

void get()
{
student::get();
Internal_Exam::get();
External_Exam::get();
cout << endl << "Total marks obtained is " << total_marks << endl;
}
};


int main()
{
result r;
r.set();
r.get();
} 
