#include <iostream> 

using namespace std; 

class Que{
	private:
		struct mediaInfo{
			string mediaName;
			int mediaLength;
			
		};
		struct node{
			node* next; 
			mediaInfo mediaObject;
		};
		node* head;
		node* last;
	public:
		Que(){
			head = NULL;
			mediaInfo mediaObject;
		};
		void push(string name, int length){
			if (head == NULL){
				node* temp = new node();
				temp->mediaObject.mediaName = name;
				temp->mediaObject.mediaLength = length;
				head = temp;
				last = temp;
			}
			else{
				node* temp = new node();
				temp->mediaObject.mediaName = name;
				temp->mediaObject.mediaLength = length;
				last->next = temp;
				last = temp;
			}
		};
		void pop(){
			node* temp;
			temp = head;
			head = head->next;
			delete(temp);
		};
		bool isEmpty(){
			if (head == NULL){return true;}
			else {return false;}
		};
		mediaInfo getItem(){
			return head->mediaObject;
		};
};