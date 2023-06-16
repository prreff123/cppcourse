#include<iostream>
using namespace std;

//multiple inheritance

//syntax for inheriting in multiple inheritance.
//class derived: visibility-mode base1, visibility-mode base2{
//	class body of class "derivedC"
//};

class base1{
	protected:
		int base1int;
		public:
			void get_base1int(int a){
				base1int = a;
			}
};

class base2{
	protected:
		int base2int;
		public:
			void get_base2int(int a){
				base2int = a;
			}
};

class derived: public base1, public base2{
	public:
		void show(){
			cout<<" the value of base1 is "<<base1int<<endl;
		    cout<<" the value of base2 is "<<base2int<<endl;
		    cout<<" the sum of these values is "<< base1int + base2int <<endl;
		
		}
};
/*
the inherited derived class will look something like this
data members:
base1int ----> protected
base2int ----> protected
 member function:
 get_base1int() ---> public
 get_base2int() ---> public
 get_show() ---> public
  */


int main()
{
	derived harry;
	harry.get_base1int(25);
    harry.get_base2int(5);
    harry.show();
  return 0;

}
