#include<iostream>
using namespace std;

/*
class template with multiple parameters.
 template<class t1, class t2>
 class name of class {
    //body
	}
 */

template<class t1, class t2>	
class myclass{
	public:
		t1 data1;
		t2 data2;
		
		myclass(t1 a, t2 b){
			data1 = a;
			data2 = b;
		}
		
		void display(){
			cout<<this->data1<<endl<<this->data2;
		}
};

int main()
{
	myclass<int, float> obj(1, 1.8);
	obj.display();

  return 0;

}
