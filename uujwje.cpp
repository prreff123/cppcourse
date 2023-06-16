#include<iostream>
using namespace std;

int main(){
	int n,i;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	for(i=2;i<n; i++){
		if(n%i==0){
			cout<<"This is not a prime number"<<endl;
			break;
		}		
    	else{	
		   cout<<"Number is prime";
	    }
	} 
	return 0;
}
