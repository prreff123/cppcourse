#include<iostream>
using namespace std;
//Queue

class Queue{
	private:
		int front;
		int rear;
		int arr[5];
	public:
		Queue(){
			front=-1;
			rear=-1;
			for(int i=0;i<5;i++){
				arr[i] = 0;
			}
		}
	void enqueue(int val){
		if(rear==4){
			cout<<"Queue is full"<<endl;
			return;
		}
		else if(front==-1 && rear==-1){
			front=0;
			rear=0;
			arr[front] = val;
		}
		else{
			rear++;
			arr[rear] = val;
		}
	}
	int dequeue(){
		int x;
		if(front==-1 && rear==-1){
			cout<<"Queue is not full"<<endl;
			return 0;
		}
		else if(rear==0){
			x = arr[front];
			arr[front] = 0;
			rear=-1;
			front=-1;
			return x; 
		}
		else{
			x = arr[front];
			arr[front] = 0;
			front++;
			return x;
		}
	}
	void display(){
		cout<<"All the elements in the Queue are: "<<endl;
		for(int i=0;i<5;i++){
			cout<<arr[i]<<" "<<endl;
		}
	}	
};

int main(){
	Queue Q1;
	Q1.enqueue(10);
	Q1.enqueue(20);
	Q1.enqueue(30);
	Q1.enqueue(40);
	Q1.enqueue(50);
	Q1.dequeue();

	Q1.display();
	return 0;
}