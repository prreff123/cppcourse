#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ofstream out;
	out.open("sample .cpp");
	out<<"this is me"<<endl;
	out<<"this is me also"<<endl;
	out<<"this is also me"<<endl;
	out.close();
	
	ifstream in;
	string st;
	in.open("sample .cpp");
	in>>st;
	cout<<st;
	
	while(in.eof()==0 ){
		getline(in,st);
	}
	
	in.close();

  return 0;

}
