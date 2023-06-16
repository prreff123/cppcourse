#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		//creating a constructors
		/*constructors is a special member function with same name as of the class.
		.. It is automatically invoked (call) whenever an object is created
		
		..it is used to initialize the objecys of its class*/

		complex(void);//constructor declaration
		
		void printnumber(){
			cout<<"your number is "<<a<<" + "<<b<<" i"<<endl;
		}	
};

complex ::complex(void){
	a = 10;
	b = 20;
} 
int main()
{
   complex c1, c2;
   c1.printnumber();
   c2.printnumber();
  return 0;

}




/*program of constructors

1. it should be declared in the public section of the class
2. they are automatically invoked(call) whenever the object is created 
3. they cannot return value and do not have return types
4. it cna have default arguments 
5. we cannot refer to thier address
*/
