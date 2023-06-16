#include<iostream>
using namespace std;

int search(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	int result = search(arr,n,x);
	if(result==-1){
		cout<<"Element is not present in array. "<<endl;
	}
	else{
		cout<<"Element is present at index "<<result;
	}
	
//	sum of all no. of elements in array
//	int arr[10];
//	for(int i=0;i<10;i++){
//		cin>>arr[i];
//	}
//	int sum = 0;
//	for(int i=0;i<10;i++){
//		sum = sum + arr[i];
//	}
//	cout<<sum<<" ";
	return 0;
}