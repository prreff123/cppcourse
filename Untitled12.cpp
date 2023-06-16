#include<iostream>
using namespace std;
void g();
int sum(int a, int b){
	
//	formal a and b will be taking values from actual
//	parameters num1 and num2;

	int c= a+b;
	return c;
}
     // function prototype
     //type function- name(arguments);
     int sum (int a, int b);


int main()
{
	int num1 , num2;
	cout<<"enter first number"<<endl;
	cin>>num1;
	cout<<"enter second number"<<endl;
	cin>>num2;
	
//	num1, mum2 are actual parameters
	
	cout<<"the value is"<<sum(num1, num2);
	g();
	return 0;
}
    void g(){
    	
    	cout<<"\n hello good morning";
	}