//Queue using array
#include<iostream>
using namespace std;

class Queue{
	private:
		int front;
		int rear;
		int arr[5];
	public:
		Queue(){
			front=-1;
			rear=-1;
			for(int i=0;i<5; i++){
				arr[i] = 0;
			}
		}
		
		bool isempty(){
			if(front==-1 && rear==-1){
				return true;
			}
			else{
				return false;
			}
		}
		
		bool isfull(){
			if(rear==4){
				return true;
			}
			else{
				return false;
			}
		}
		
		void enqueue(int val){
			if(isfull()){
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isempty()){
				rear=0;
				front=0;
				arr[rear]=val;
			}
			else{
				rear++;
				arr[rear]=val;
			}
		}
		
		int dequeue(){
			int x;
			if(isempty()){
				cout<<"Queue is empty"<<endl;
				return 0;
			}
			else if(front == rear){
				x = arr[front];
				arr[front]=0;
				return x;
				rear=-1;
				front=-1;
			}
			else{
				x=arr[front];
				arr[front]=0;
				front++;
				return x;
			}
		}
		
		int count(){
			return (rear-front+1);
		}
		
		void display(){
			cout<<"All the values in the queue are - "<<endl;
			for(int i=0;i<5;i++){
				cout<<arr[i]<<" ";
			}
		}
		
};

int main(){
	Queue Q1;
	int option,value;
	
	do{
		cout<<"\n\n What operation do you want to perform? Select option number. Enter 0 to exit"<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isempty()"<<endl;
		cout<<"4. isfull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. clear screen()"<<endl<<endl;
		cin>>option;
		
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Enqueue operation \nEnter an item to Enqueue in the queue"<<endl;
				cin>>value;
				Q1.enqueue(value);
				break;
			case 2:
				cout<<"Dequeue operation \n Dequeued value "<<Q1.dequeue()<<endl;
				break;
			case 3:
				if(Q1.isempty())
				cout<<"Queue is empty"<<endl;
				else{
					cout<<"Queue is not empty"<<endl;
				}
				break;
			case 4:
				if(Q1.isfull())
				cout<<"Queue is full"<<endl;
				else{
					cout<<"Queue is not full"<<endl;
				}
				break;
		    case 5:
		    	cout<<"Count operation \n count of items in queue "<<Q1.count()<<endl;
		    	break;
			case 6:
				cout<<"display function called: "<<endl;
				Q1.display();
				break;
			default:
				cout<<"Enter proper option number "<<endl;
	    }
		
	}while(option!=0);
	
	return 0;
}