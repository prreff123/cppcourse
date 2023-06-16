#include<iostream>
using namespace std;

class simplecalculator{
     public:
	    int a,b;
		
		void getdata(){
			cout<<"the value of a is "<<a<<endl;
			cin>>a;
			cout<<"the value of b is "<<b<<endl;
			cin>>b;
		}
		
		void performoperation(){
			cout<<"the value of a+b is "<<a+b<<endl;
			cout<<"the value of a-b is "<<a-b<<endl;
			cout<<"the value of a*b is "<<a*b<<endl;
			cout<<"the value of a/b is "<<a/b<<endl;
		}	
};

int main()
{
	simplecalculator calc;
	calc.getdata();
	calc.performoperation();
	return 0;
}
