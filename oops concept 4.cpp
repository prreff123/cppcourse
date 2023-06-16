// Abstraction
#include<iostream>
using namespace std;

class abstractstudent{
	virtual void scholarship()=0;
};

class student: abstractstudent{
	public:
		string name;
		int marks;
		string course;
		
		void scholarship(){
			if (marks>70)
			cout<<"The scholarship has been Given "<<name;
			else
			cout<<"The scholarship has been Deny";
		}
};

int main()
{
	student s1;
	s1.name = "PJ";
	s1.marks = 80;
	s1.course = "IT";
	s1.scholarship();

	return 0;
}
