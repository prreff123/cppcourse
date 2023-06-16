#include<iostream>
using namespace std;

//stack implementation using array
class stack{
	private:
		int top;
		int arr[5];
	public:
		stack(){
			top = -1;
			for(int i=0; i<5; i++){
				arr[i] = 0;
			}
		}
	void push(int val){
		if(top==4){
			cout<<"stack overflow"<<endl;
		}	
		else{
			top++;
			arr[top] = val;
		}
	}	
	
	int pop(){
		if(top==-1){
			cout<<"stack underflow";
		}
		else{
			int popvalue = arr[top];
			arr[top] = 0;
			top--;
			return popvalue;
		}
	}
	
	void display(){
		cout<<"All the elements in there stack are"<<endl;
		for(int i=4; i>=0; i--){
			cout<<arr[i]<<endl;
		}
	}
};

int main(){
	stack s1;
	s1.push(10);
	s1.push(20);
	s1.pop();
    s1.display();
	return 0;
}
