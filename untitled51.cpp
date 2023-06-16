#include<iostream>
#include<cstring>
using namespace std;

class CWH{
	protected:
		char title[30];
		float rating;
		public:
			CWH(char *s, float r){
				strcpy(title, s);
				rating = r;
			}
			virtual void display(){}
			
};

class CWHvideo: public CWH{
	int videolength;
	public:
		CWHvideo( char *s, float r, int vl): CWH(s,r){
			videolength = vl;
		}
		void display(){
			cout<<"this is an amazing video with title "<<title<<endl;
			cout<<"ratings: "<<rating<<" out of 5 stars "<<endl;
			cout<<"length of this video is: "<<videolength<< " minutes"<<endl;
		}
};

class CWHtext: public CWH{
	int words;
	public:
		CWHtext(char *s, float r, int wc): CWH(s,r){
			words = wc;
		}
		void display(){
			cout<<"this is an amazing text tutorial  with title "<<title<<endl;
			cout<<"ratings of this text tutorial: "<<rating<<" out of 5 stars "<<endl;
			cout<<"no. of words in this text tutorial is: "<<words<< " words"<<endl;
		}
};

int main()
{
	char * title = new char[30];
	float rating, vlen;
	int words;
	
	//for code with harry videos.
	title = "Django tutorial";
	vlen = 4.56;
	rating = 4.89;
	CWHvideo djvideo(title, rating, vlen);
	//djvideo.display();

   	//for code with harry text.
	title = "Django tutorial text";
	words = 433;
	rating = 4.29;
	CWHtext djtext(title, rating, words);
	//djtext.display();
     
     CWH* tuts[2];
     tuts[0] = &djvideo;
     tuts[1] = &djtext;
     
     tuts[0]->display();
     tuts[1]->display();
     
  return 0;

}

// rules for virtual function.
//1. They cannot be static
//2. They are accessed by object ponters.
//3. virtual functions can be a friend of another class
//4. A virtual function in base class might not be used.
//5. If a  virtual function define in a base class, there is no necessity of redefining it in the derived class. 
