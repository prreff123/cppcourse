#include<iostream>
using namespace std;

class number{
	int a;
	public:
		number(){
		a = 0;
		}
				
		number(int num){
			a = num;
		
		}
		//when no copy constructor is found , compiler supplies its own copy constructor . 
		number(number &obj){
			cout<<"copy constructor called"<<endl;
			a = obj.a;
		}
		
		void display(){
			cout<<"the number for this object is "<<a<<endl;
		}
		
};
int main()
{
	number x, y, z(45);
	x.display();
	y.display();
	z.display();
	number z1(z);
	z1.display();
//z1 should exactly resemble z or x or y. 
  return 0;

}
