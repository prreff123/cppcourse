#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	//connecting our files with hout stream
	
	ofstream hout("sample .cpp");
    //creating a name string and filling it with the string entered by the user
	cout<<"enter your name";
	string name;
	cin>>name;
	
	//writing a string to the file
    hout<<"my name is "+ name;
    hout.close();
    
    ifstream hin("sample .cpp");
    string content;
    hin>>content;
    cout<<"the content of this file is "<<content;
    hin.close();
    
  return 0;

}
