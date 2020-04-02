#include <iostream>
#include "list.h"

void linked::insert_beg(int n){
	node *tmp = new node;
	tmp->data=n;
	if(head == NULL){
		head=tmp;
		head->next=NULL;
	}
	else{
		tmp->next=head;
		head=tmp;
	}
	size++;

}

void linked::delete_beg(){
        if(head == NULL)
		std::cout<<"list is emplty\n";
	else if(head->next==NULL){
		std::cout<<"deleted elements is : "<<head->data<<std::endl;
		head=NULL;
		size--;
	}
	else{
		std::cout<<"deleted element is : "<<head->data<<std::endl;
		node *link=head->next;
		head=link;
		size--;
	}
	
}

void linked::insert_mid(int item,int n){
	node *temp = new node;
	temp->data=item;
	temp->next=NULL;
	if((n>=size)||(n<=1))
		std::cout<<"invalid loaction\n";
	else{
		node *current,*tmp;
		tmp=head;
		current=NULL;
		for(int i=0;i<n-1;i++){
			current=tmp;
			tmp=tmp->next;
		}
		current->next=temp;
		temp->next=tmp;
		size++;
	}
}	
	

void linked::delete_mid(int item){
	if(head==NULL)
		std::cout<<"list is empty";
	else{
		node *tmp=head;
		node *prev;
		while(tmp!=NULL){
			if(tmp->data==item){
				if(tmp==head){
					head=head->next;
					delete tmp;
					return;
					size--;
				}
				if(tmp->next==NULL){
					prev->next=NULL;
					delete tmp;
					return;
					size--;
				}
				prev->next=tmp->next;
				delete tmp;
				return;
				size--;
			}
			else{
				prev=tmp;
				tmp=tmp->next;
			}
		}
		std::cout<<"node not existed\n";
	}
}


void linked::insert_end(int n){
	node *temp = new node;
        temp->data=n;
        temp->next=NULL;
        node *current,*tmp;
        tmp=head;
        current=NULL;
        for(int i=0;i<size;i++){
		current=tmp;
                tmp=tmp->next;
	}
        current->next=temp;
        temp->next=tmp;
        size++;

}

void linked::delete_end(){
	if(head==NULL){
		std::cout<<"list is empty\n";
	}
	else{
		node *temp = head;
		node *prev;
		for(int i=0;i<size-1;i++){
			prev=temp;
			temp=temp->next;
		}
		prev->next=temp->next;
		delete temp;
        	size--;
	}
      

}
	
void linked::display(){
	if(head==NULL)
		std::cout<<std::endl;
	else{
		node *tmp = head;
		while(tmp != NULL){
			std::cout<<tmp->data<<" ";
			tmp = tmp->next;
		}
		std::cout<<std::endl;
	}
}

