#include<w32api.h>
using namespace std;

int main(){
//	int a=2,b=3,c=4,d=5,e=6,f=7,g=8,h=9,j=10,i;
//	for(i=1;i<=10;i++){
//		cout<<a*i<<"\t"<<b*i<<"\t"<<c*i<<"\t"<<d*i<<"\t"<<e*i<<"\t"<<f*i<<"\t"<<g*i<<"\t"<<h*i<<"\t"<<j*i<<endl;
//	}
    int i;
    cout<<"Enter a number: "<<endl;
    cin>>i;
    if(i%2==0){
    	cout<<"Even Number"<<endl;
	}
	else{
		cout<<"Odd Number"<<endl;
	}
	return 0;
}
