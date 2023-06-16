// Access modifiers
#include<iostream>
using namespace std;

class student{
	public:
		int marks1;
		void marks(){
			cout<<"The marks scored is "<<marks1<<endl;
		}
//	private:
//	    int marks2;
};

int main(){
	
	student s1;
	s1.marks1 = 45;
	s1.marks();
//	s1.marks2 = 65;

	return 0;
}
