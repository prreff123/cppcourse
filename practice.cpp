#include<iostream>
using namespace std;
//pallindrome function

int main(){
	int n,r,sum=0,t;
	cout<<"Enter a number"<<endl;
	cin>>n;
	t=n;
	while(n!=0){
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(t==sum){
		cout<<"Pallindrome number"<<endl;
	}
	else{
		cout<<"Not a pallindrome number";
	}
	return 0;
}
