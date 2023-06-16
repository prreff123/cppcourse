//run time polymorphism / function overriding
#include<iostream>
using namespace std;

class student{
	public:
		virtual void intro(){
			cout<<"The result of the student is intro"<<endl;
		}
		void display(){
			cout<<"The result of the student is display "<<endl;
		}		
};

class Tony: public student{
	void intro(){
		cout<<"The result of the tony is intro"<<endl;
	}
	void display(){
		cout<<"The result of the tony is display "<<endl;
	}
};

int main()
{
	student *st;
	Tony t;
	st=&t;
	st->intro();
	st->display();
	
	return 0;
}
