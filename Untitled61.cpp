#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v){
	for(int i=0; i < v.size(); i++){
		cout<<v[i]<< " ";
	//12	cout<<v.at()<< " "; 
	}
	cout<<endl;
}

int main()
{
	//ways to create a vector 
	vector<int> vec1;
	int element, size;
	cout<<"enter the size of your vector "<<endl;
	cin>>size;
	
	for(int i=0; i < size; i++){
		cout<<"enter an element to add this vector";
		cin>>element;
	    vec1.push_back(element);
	}
	
	//vec1.pop_back();
	display(vec1);
	vector<int> :: iterator iter = vec1.begin();
	vec1.insert(iter, 566); 
	display(vec1);

  return 0;

}
