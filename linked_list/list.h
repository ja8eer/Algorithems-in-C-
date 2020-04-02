#ifndef LIST_H_
#define LIST_H_

struct node{
	int data;
	node *next;
};

class linked{
	int size=0;
	node *head;
	public:
	linked(){
		head = NULL;
	}
	void insert_beg(int);
	void delete_beg();
	void insert_mid(int,int);
	void delete_mid(int);
	void insert_end(int);
	void delete_end();
	void display();
};

#endif
