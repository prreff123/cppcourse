#include<iostream>
using namespace std;

class employee{
	int id;
	int salary;
	
	public:
		void setid(void){
			
			salary= 122;
			cout<<"enter the id of employee"<<endl;
			cin>>id;
		}
		
		void getid(void){
			cout<<"the id of this employee is "<<id<<endl;
		}
};
int main()
{
	employee harry , rohan , lovish , pj;
//	harry.setid();
//	harry.getid();
    
	employee fb[4];
	for (int i=0; i < 4; i++){
		fb[1].getid();
		fb[1].setid();
		
	}	

	return 0;
	
}
