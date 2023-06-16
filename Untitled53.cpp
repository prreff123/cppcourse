#include<iostream>
#include<fstream>

/*
  The useful classes for working with files in c++ are:
  1. fstreambase
  2. ifstream---> derived from fstreambase.
  3. ofstream---> derived from fstreambase.
*/

//In order work with file in c++ have to open it. primarily, there are 2 ways to open a file
//1. using the constructor.
//2. using the member function open() of the class

using namespace std;

int main()
{
	string st = "harry bhai";
	string st2;
	
	//opening files using constructor and writing it.
	ofstream out("sample53.cpp"); //write operation
	out<<st;
	
	//opening files using constructor and reading from it.
//	ifstream in("sample .cpp"); //read operation
  //  in>>st2;
//	getline(in,st2);
//	cout<<st2;

	return 0;
    
}
