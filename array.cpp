#include<iostream>
using namespace std;
//ARRAY

int main(){
//1Darray
//	int arr[3] = {1,2,3};
//	for(int i=0;i<3;i++){
//		cout<<arr[i]<<" ";
//	}

//2Darray
//    int arr[3][2] = {
//              	     {1,2},
//		             {3,4},
//		             {5,6}};
//		         
//	for(int i=0;i<3;i++){
//		for(int j=0;j<3;j++){
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<"\n";
//	}

//3Darray
    int arr[2][3][3] = {
    	{{1,2,3},{10,11,12}},
    	{{4,5,6},{13,14,15}},
    	};
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<3;k++){
				cout<<arr[i][j][k]<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}