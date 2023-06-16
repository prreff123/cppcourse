#include<iostream>
using namespace std;

class employee{

	int id;
	static int count;
	
	public:
		void setdata(void){
			cout<<"enter the id"<<endl;
			cin>>id;
			count ++;
		}
		void getdata(void){

			cout<<"the id of this employee is " <<id<< " and this is employee number"<<count<<endl;
		}
};

int employee :: count=1000; //default value is 0.
int main()
{
	employee harry , rohan, pj;
	//harry.id=1
	//harry.count=1; //cannot do this as id count are private
	
	harry.setdata();
	harry.getdata();
	
	rohan.setdata();
	rohan.getdata();
	
	pj.setdata();
	pj.getdata();
	return 0;
}