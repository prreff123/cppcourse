#include<iostream>
using namespace std;
//Find the maximum and minimum number

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=arr[0], min = arr[0];
	for(int i=1;i<n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
		if(min > arr[i]){
			min = arr[i];
		}
	}
	cout<<"Maximum Value is = "<<max<<endl;
	cout<<"Minimum Value is = "<<min<<endl;

	return 0;
}
