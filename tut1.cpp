#include<iostream>
using namespace std;

class Simplecalculator{
		int a,b;
		public:
			
	  void setdata(){
	  	cout<<"The value of a is"<<endl;
	  	cin>>a;
	  	cout<<"the value of b is"<<endl;
	  	cin>>b;
	  }
	  void performoperation(){
	  	cout<<"the value of a+b is"<<a+b<<endl;
	  	cout<<"the value of a-b is"<<a-b<<endl;
	  	cout<<"the value of a*b is"<<a*b<<endl;
	  	cout<<"the value of a/b is"<<a/b<<endl;
	  }
};

int main()
{
	Simplecalculator calc;
	calc.setdata();
	calc.performoperation();

	return 0;
}
