#include<iostream>
using namespace std;

struct employee{
	
	int eid;//4
	char favchar;//1
	float salary;//4
}; 
     
      union money {
      	
      	
      	int rice;//4
      	char car;//1
      	float pounds;//4
	  };
   

int main()
{
//	
//	enum meal{ breakfast, lunch, dinner};
//	meal m1 = breakfast; 
//	cout<<(m1==0);
//	cout<<breakfast<<endl;
//	cout<<lunch<<endl;
//	cout<<dinner<<endl;
	
	
//      union money m1;
//      m1.rice = 34;
//      m1.car = 'c';
//      m1.pounds = 14.5;
//      cout<<"the value of m1.pounds is"<<m1.pounds;

      
      
	struct employee Priyanshujain;
	Priyanshujain.eid = 1;
	Priyanshujain.favchar = 'c';
	Priyanshujain.salary = 120;
	
	cout<<"the value is"<<Priyanshujain.eid<<endl;
	cout<<"the value is"<<Priyanshujain.favchar<<endl;
	cout<<"the value is"<<Priyanshujain.salary<<endl;
	
	
	return 0;
}