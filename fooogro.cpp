#include<iostream>
using namespace std;

int main(){
	int n,i,f;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	
	for(i=1;i<n;i++){
		f=f*i;
	}
	cout<<"factorial value is: "<<f<<endl;
	return 0;
}
