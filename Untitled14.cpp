#include<iostream>
using namespace std;

inline int product (int a, int b){
	//not recommended to use below lines with inlines function.
	return a*b;
}

//float moneyrecieved( int currentmoney, float factor= 1.04){
//	return currentmoney * factor;
//}
int main()
{
   int a,b;
   cout<<"enter the value of a and b"<<endl;
   cin>>a>>b;
   cout<<"enter the product of a and b is"<<product(a,b);
//   cout<<"if you have "<<currentmoney<<" rs in your bank account , you will receive"<<moneyreceived
//   (money,1.1)<<" rs after one year"
	return 0;
}