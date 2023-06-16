// oops concept
#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		string name;
		int id;
		string course;
		
		void intoduce(){
			cout<<"The name of student is "<<name<<endl;
			cout<<"The id of student is "<<id<<endl;
			cout<<"The course of student is "<<course<<endl;
		}
};

int main()
{
	student s1;
	s1.name = "Priyanshu jain";
	s1.id = 141;
	s1.course = "Computer science";
	s1.intoduce();

	return 0;
}
