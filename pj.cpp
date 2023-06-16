#include<iostream>
using namespace std;

class simplecalculator{
	public:
		int a,b;
		
		void getdata(){
	   	 cout<<"enter the value of a is"<<endl;
		 cin>>a;
		 cout<<"enter the value of b is"<<endl;
		 cin>>b;
	}
		
		void performoperations(){
			cout<<" the value of a+b is "<<a+b<<endl;
			cout<<" the value of a-b is "<<a-b<<endl;
			cout<<" the value of a*b is "<<a*b<<endl;
			cout<<" the value of a/b is "<<a/b<<endl;
		}
		
};

int main()
{
	simplecalculator calc;
	calc.getdata();
	calc.performoperations();

	return 0;
}
