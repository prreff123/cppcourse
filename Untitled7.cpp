#include<iostream>
using namespace std;

int main()
{
	 int j=1,i;
	 while (j<=10)
	 {
	 	
	 	i=1;
	 	while(i<=10)
	 	{
	 		cout<<i*j<<"  ";
	 		
	 		i=i+1;
		 }
		 
		 j=j+1;
		 
		 cout<<endl;
	 }
	return 0;
}
//int main(){
//	string name;
//	cout<<"enter string"<<endl;
//	getline (cin,name);
//	
//	int i=0;
//	while(name[i]){
//		i= i+1;
//		
//	}
//	
//	cout<<"length= "<<i;
//	return 0;
//}