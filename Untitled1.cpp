#include<iostream>
using namespace std;
//there are two types of header files:
//1. system header files: it comes with the compiler
//2. user defined header file : It is written by the programmer
// #include"this.h" //-->this will produce an error if this.h is no present in the current directory 
int main()
{
	int a=4, b=5;
	cout<<"operators in c++"<<endl;
	cout<<"following are the types of c++"<<endl;
	//arithmetic operators
	cout<<"the value of a+b is"<<a+b<<endl;
	cout<<"the value of a-b is"<<a-b<<endl;
	cout<<"the value of a*b is"<<a*b<<endl;
	cout<<"the value of a/b is"<<a/b<<endl;
	cout<<"the value of a%b is"<<a%b<<endl;
	cout<<"the value of a++ is"<<a++<<endl;
	cout<<"the value of a-- is"<<a--<<endl;
	cout<<"the value of --a is"<<--a<<endl;
	cout<<"the value of ++a is"<<++a<<endl;
	
   //assignment operators --> use to assign values to variables
   //comparison operators
   cout<< "the value of a== b is"<<(a==b)<<endl;
  cout<< "the value of a!= b is"<<(a!=b)<<endl;
  
	
	return 0;
       
       
     
}  
