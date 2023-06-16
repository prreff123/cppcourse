#include<iostream>
#include<string>
using namespace std;

class student{
	public:
		string name;
		int id;
		string course;
		
		void introduce(){
			cout<<"The name of student is "<<name<<endl;
			cout<<"The id of the student is "<<id<<endl;
			cout<<"The course of student is "<<course<<endl;
		}
//      construter 
		student(string n, int i, string c){
			name = n;
			id = i;
			course = c;
		}
};

int main()
{
	student s1 = student("PJ",141,"cs");
	s1.introduce();
	
	student s2 = student("PJ",142,"ME");
	s2.introduce();
	
	student s3 = student("PJ",143,"IT");
	s3.introduce();
	
	return 0;
}
