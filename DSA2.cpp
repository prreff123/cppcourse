//STACK using array
#include<iostream>
using namespace std;

class stack{
	private:
		int top;
		int arr[5];
	public:
		stack (){
			top = -1;
			for(int i=0; i<5; i++){
				arr[i] = 0;
			}
		}
		
		bool isempty(){
			if(top==-1)
			return true;
			else
			return false;
		}
		
		bool isfull(){
			if(top==4)
			return true;
			else
			return false;
		}
		
		void push(int val){
			if(isfull()){
				cout<<"Stack overflow"<<endl;
			}
			else{
				top++;  //1
				arr[top]=val;
			}
		}
		
		int pop(){
			if(isempty()){
				cout<<"Stack underflow"<<endl;
				return 0;
			}
			else{
				int popvalue = arr[top];
				arr[top] = 0;
				top--;
				return popvalue;
			}
		}
		
		int count(){
			return (top+1);
		}
		
		int peek(int pos){
			if (isempty()){
				cout<<"Stack underflow"<<endl;
				return 0;
			}
			else{
				return arr[pos];
			}
		}
		
		void change(int pos, int val){
			arr[pos] = val;
			cout<<"value changed at location"<<endl;
		}
		
		void display(){
			cout<<"All value in the stack are "<<endl;
			for(int i=4; i>=0; i--){
				cout<<arr[i]<<endl;
			}
		}
};

int main(){
	stack s1;
	int option,position,value;
	
	do{
		cout<<"What operation do you want to perform? Select option number. Enter 0 to exit"<<endl;
		cout<<"1. Push()"<<endl;
		cout<<"2. Pop()"<<endl;
		cout<<"3. isempty()"<<endl;
		cout<<"4. isfull()"<<endl;
		cout<<"5. Peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. clear screen()"<<endl<<endl;
		cin>>option;
		
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Enter an item to push in the stack"<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"Pop function called - popped value: "<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isempty()){
					cout<<"Stack is empty"<<endl;
				}		
				else{
					cout<<"stack is not empty"<<endl;
				}
				break;
			case 4:
				if(s1.isfull()){
					cout<<"stack is full "<<endl;
				}
				else{
					cout<<"stack is not full"<<endl;
				}				
				break;
		    case 5:
		    	cout<<"Enter position of item you want to peek: "<<endl;
		    	cin>>position;
		    	cout<<"Peek function called - value at position "<<position<<" is "<<s1.peek(position)<<endl;
		    	break;
			case 6:
				cout<<"count function called - "<<"number of item in the stack are: "<<s1.count()<<endl;
				break;
		    case 7:
				cout<<"change function called - "<<endl;
				cout<<"Enter position of item you want to change: "<<endl;
				cin>>position;
				cout<<endl;
				cout<<"Enter valus of item you want to change: "<<endl;
				cin>>value;
				s1.change(position,value);
				break;
			case 8:
				cout<<"display function called - "<<endl;
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"Enter proper option number "<<endl;
	    }
		
	}while(option!=0);
	
	return 0;
}