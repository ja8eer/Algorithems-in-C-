#include <iostream>
#include "list.h"

int main(){
	linked l;
	l.insert_beg(10);
	l.insert_beg(20);
	l.insert_beg(30);
	l.insert_beg(40);
	l.display();
	l.insert_mid(50,2);
	//l.insert_mid(60,7);
	l.display();
	l.delete_end();
	l.display();
	return 0;
}
