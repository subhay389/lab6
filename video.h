#include "iostream"
#include "media.h"

using namespace std; 

class Video : public Media {
	Video(string n, int l){
		Media(n,l);
	};
	void display(){
		cout << "Video" << title << length << endl; 
	}
};