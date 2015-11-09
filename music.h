#include "iostream"
#include "media.h"

using namespace std; 

class Music : public Media {
	Music(string n, int l){
		Media(n,l);
	};
	void display(){
		cout << "Song" << title << length << endl; 
	};
};