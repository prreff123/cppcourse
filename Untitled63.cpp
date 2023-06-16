#include<iostream>
#include<map>
#include<string>

using namespace std;

// map is an associative array.
int main()
{
	map<string, int> marksmap;
	marksmap["harry"] = 98;
	marksmap["jack"] = 59;
	marksmap["rohan"] = 2;
	
	marksmap.insert({{"kozume", 169 }, {"kuroo", 187}}); 
	map<string, int> :: iterator iter;
	for(iter=marksmap.begin(); iter!=marksmap.end();iter++){
		cout<<(*iter).first<<" "<<(*iter).second<<"\n";
	}
    	
	cout<<"this size is: "<<marksmap.size()<<endl;
	cout<<"this max size is: "<<marksmap.max_size()<<endl;
	cout<<"this empty's return value is: "<<marksmap.empty()<<endl;
	
	return 0;
}