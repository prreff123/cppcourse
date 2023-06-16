#include<iostream>
using namespace std;
class complex;

class complex{
	int a,b;
	public:

		complex(int, int);//constructor declaration
		
		void printnumber(){
			cout<<"your number is "<<a<<" + "<<b<<" i"<<endl;
		}	
};




complex ::complex(int x, int y) //----> this is a parameterized constructors as it

{
	a = x;
	b = y;
	//cout<<"hello world";
}

int main(){
	//implicit call
	complex a(4,6);
	
	//explcit call
	
	complex b = complex(5,7);
	a.printnumber();	
    b.printnumber();
    
  return 0;

}
