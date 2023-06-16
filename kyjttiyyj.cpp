#include<iostream>
using namespace std;

int main(){
	    void function(int data){
		int flag = 0;
		if(head != null){
			Node temp  = head.getNext();
			while((temp!=head) && (!(temp.getitem() == data))){
				temp = temp.getNext();
				flag = 1;
				break;
			}
			
		}
		if(flag){
			cout<<"sucess";
		}
		else{
			cout<<"fail";
		}
	}


	return 0;
}
