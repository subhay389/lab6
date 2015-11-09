#include <iostream>
#include <string>

using namespace std;

class Media{
	protected: 
		string title;
		int length;
	public: 
		Media(string t, int l){
			title = t;
			length = l;
		};
		virtual void display(){
		};

};

