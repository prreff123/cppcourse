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
			cout<<"Enter the value of a+b is"<<a+b<<endl;
			cout<<"Enter the value of a-b is"<<a-b<<endl;
			cout<<"Enter the value of a*b is"<<a*b<<endl;
			cout<<"Enter the value of a/b is"<<a/b<<endl;
		}
};

int main(){
	simplecalculator calc;
	calc.getdata();
	calc.setdata();
}
