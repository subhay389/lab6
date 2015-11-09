#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>

#include "media.h"
#include "music.h"
#include "video.h"
#include "que.h"

using namespace std; 

int main(){

	string name;
	string length;

	srand(time(0));

	do{
		randomNum = (rand() % 2);

		ifstream inputfile;

		if (randomNum == 0){
			inputfile.open(video.txt);
			while (inputfile.eof()){
				inputfile >> name >> length;
				Video object(name, length);
				Media* m= &object;
				m->display();
			}
		}
		else {
			inputfile.open(song.txt);
			while (inputfile.eof()){
				inputfile >> name >> length;
				Song object(name, length);
				Media* m= &object;
				m->display();
			}
		}
	}while(true);		

return 0;
};