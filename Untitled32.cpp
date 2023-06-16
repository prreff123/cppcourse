#include<iostream>
using namespace std;

class bankdeposit{
	int principle;
	int years;
	float interestrate;
	float returnvalue;
	public:
		bankdeposit(){}
		bankdeposit(int p, int y, float r);// r can be value like 0.04.
		bankdeposit(int p, int y, int r);// r can be value like 14.
		void show();
};

bankdeposit :: bankdeposit(int p, int y, float r){
	principle = p;
	years = y;
	interestrate = r;
	
	returnvalue = principle;
	for(int i; i < y; i++){
		returnvalue = returnvalue * (1+r);
	}
}
bankdeposit :: bankdeposit(int p, int y, int r){
	principle = p;
	years = y;
	interestrate = float(r)/100;
	
	returnvalue = principle;
	for(int i; i < y; i++){
		returnvalue = returnvalue * (1+r);
	}
}
void bankdeposit :: show(){
	cout<<endl<<"principle amount was "<<principle<<" return value after "<<years
	<<" is "<<returnvalue<<endl;
}
int main()
{
  bankdeposit bd1, bd2, bd3;
  int p,y;
  float r;
  int R;
  
  cout<<"enter the value of p y and r"<<endl;
  cin>>p>>y>>r;
  bd1 = bankdeposit(p,y,r);
  bd1.show(); 	
  
  return 0;

}
