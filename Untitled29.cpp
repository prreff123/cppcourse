#include<iostream>
using namespace std;

class point{
	int x,y;
	public:
		point(int a, int b){
			x = a;
			y = b;
		}
		void displaypoint(){
			cout<<"the point is ("<<x<<" , "<<y<<" )"<<endl;
		}
};
/*create a function (Hint : make it a friend function) which takes 2 point
 objects and computes the distance between those points
*/
int main()
{
     
     point p(1,1);
     p.displaypoint();
     
     point q(4,6);
     q.displaypoint();
  return 0;

}
