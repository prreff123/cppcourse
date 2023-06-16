#include<iostream>
using namespace std;

class simplecalculator{
	int a,b;
	public:
		
		void getdata(){
			cout<<"Enter the value of a is"<<endl;
			cin>>a;
			cout<<"Enter the value of b is"<<endl;
			cin>>b;
		}
		void setdata(){
			cout<<"The value of a+b is "<<a+b<<endl;
			cout<<"The value of a-b is "<<a-b<<endl;
			cout<<"The value of a*b is "<<a*b<<endl;
			cout<<"The value of a/b is "<<a/b<<endl;
		}
};

int main()
{
	simplecalculator Calc;
	Calc.getdata();
	Calc.setdata();
//	return 0;
}
