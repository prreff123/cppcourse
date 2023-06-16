// Inheritance / single inhertance
#include<iostream>
using namespace std;

class student{
	public:
		void study(){
			cout<<"student are studying "<<endl;
		}
//		int marks = 97;
};

class Tony: public student{
	public:
		void play(){
			cout<<"student are Playing "<<endl;
		}
//		int marksdetected = 5;
};

int main()
{
	Tony T1;
	T1.study();
	T1.play();
//	cout<<"The marks obtained by tony is "<<T1.marks<<endl;
//	cout<<"The marks detected by tony is "<<T1.marksdetected<<endl;
	return 0;
}
