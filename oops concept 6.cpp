// Function overloading
#include<iostream>
using namespace std;

class student{
	public:
		void marks(int a){
			cout<<"The marks scored by the student is "<<a<<endl;
		}
		void marks(double b){
			cout<<"The marks scored by the student is "<<b<<endl;
		}
		
		void marks(){
			cout<<"none";
		}
};

int main()
{
	student s1;
	s1.marks(94);
	s1.marks(90.2);
	s1.marks();
	
	return 0;
}
