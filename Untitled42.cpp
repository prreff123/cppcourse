#include<iostream>
#include<cmath>

//multiple inheritance..
using namespace std;

class simplecalculator{
	int a,b;
	public:
		void getdata(){
			cout<<"enter the value of a"<<endl;
			cin>>a;
			cout<<"enter the value of b"<<endl;
			cin>>b;
		}
		void performoperations(){
			cout<<"the value of a+b is"<<a+b<<endl;
			cout<<"the value of a-b is"<<a-b<<endl;
			cout<<"the value of a*b is"<<a*b<<endl;
			cout<<"the value of a/b is"<<a/b<<endl;
		}
};

class scientificcalculator{
	int a,b;
	public:
		void getdata(){
		cout<<"enter the value of a"<<endl;
		cin>>a;
		cout<<"enter the value of b"<<endl;
		cin>>b;
	}
	
	void performoperations(){
		cout<<"the value of cos(a) is"<<cos(a)<<endl;
		cout<<"the value of sin(a) is"<<sin(a)<<endl;
			cout<<"the value of exp(a) is"<<exp(a)<<endl;
			cout<<"the value of tan(a) is"<<tan(a)<<endl;
		}
   };

class hybridcalculator : public simplecalculator, public scientificcalculator{
      
};

int main()
{
	
	simplecalculator calc;
    scientificcalculator calc;
	calc.getdata();
	calc.performoperations();

     hybridcalculator calc;
	 calc.getdatascientific();
	 calc.performoperationsscientific();
	 calc.getdatasimple();
	 calc.performoperationssimple();
	 
    return 0;

}
