#include<iostream>
using namespace std;

/*
syntax for initialization list in constructor:
constructor (argument list) : initialization-section
{
   assigment + other code;
}*/

class test{
	int a;
	int b;
	public:
		test(int i, int j) : a(i), b(i+j){ // constructor ke andar a/b ki value bhi daal skte h.
			cout<<" constructor executed "<<endl;
			cout<<" value of a is "<<a<<endl;
			cout<<" value of b is "<<b<<endl;
		}
};

int main()
{
	test t(4,6);
	return 0;
	
}
