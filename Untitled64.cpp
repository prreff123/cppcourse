#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
	// function objects (functor): function wrapped in a class so that 
	//it available like an object
	
	int arr[] = {1, 83, 34, 2, 54, 7};
	sort(arr, arr+6);
	//sort(arr, arr+6, greater<int>());
	for(int i=0; i<6; i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}