#include<iostream>
#include<string>
using namespace std;

class binary{
	string s;
	
	public:
		void read(void);
		void chk_bin(void);
};

  void binary ::read(void){
  	cout<<"enter a binary number "<<s;
  	cin>>s;
  } 

void :: chk_bin(void){
	for (int i=0; i < s.length(); i++)
	{
		if (s.at(i) !='0' && s.at(i) !='1'){
			cout<<"incorrect binary formats"<<endl;
			exit (0);
		}
	}
}

int main()
{
	//oops - classes and objects
	//c++----> initially called --> c with clases by stroustroup
	// structures had limitations
	
	//     ---> members are public 
	// ----> no methods
	
	//classes ---> structures + more
	// classes -----> can have methods and properties 
	//classes ----> can make few members as private & few as public
	// srtructures in c++ are typedefed 
	// you can declare objects along with the class declarationloke this;
	
    //	 class employee{
	 //class definition
	 //} harry , rohan, pj;/*
	 // nesting of members functions
	 
	binary b;
	b.read();
	b.chk_bin();
	
	
	return 0;
}