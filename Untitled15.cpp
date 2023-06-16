#include<iostream>
using namespace std;

int factorial(int n){


   if (n<=1){
   	return 1;
   }
	
   return n * factorial (n-1);
	
}

//step by step calculate of factorial.
int main()
{
	//factorial of a number:
	//6! = 6*5*4*3*2*1 = 720:
	//n! = n * (n-1)
	
	int a;
	cout<<"enter a number"<<endl;
	cin>>a;
	
	cout<<"the factoral of"<<a<<" is "<<factorial(a)<<endl;
	return 0;
}




















