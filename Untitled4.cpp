#include<iostream>
using namespace std;

int main()
{ 

//    basic control structures
      
//      1. Sequence structure-----> entry action1 ,action2 , exit;
//      2. Selection structure----> entry true(a1), false(a2) exit;
//      3. loop structure-----> entry true a1 , false a2 exit;if-else loop , if else ladder , switch case (expression) a1 default a2;

      int age;
    cout<<"tell me your age"<<endl;
      cin>>age;
      if((age<18) && (age>0)){
      	 
      	 cout<<"you can not come to my party"<<endl;
      	 
	  }
	  
	  else if(age==18){
	  	
	  	cout<<"you are the kid and you will get a kid pass to the party"<<endl;
	  	
	  }
	  else if(age<1){
	  	
	  	cout<<"you are not yet born"<<endl;
	  }
	  
	  else{
	  	
	  	cout<<"you can come to the party"<<endl;
	  	
	  }

	return 0;
 
      
}