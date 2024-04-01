#include "LinkedList.h"
template <class T>
Node<T>::Node(T data){
	this->data=data;
	this->link=NULL;
}
template <class T>
T Node<T>::get_data(){
	return data;
}
template <class T>
void Node<T>::set_link(Node* link){
	this->link=link;
}
template <class T>
Node<T>* Node<T>::get_link(){
	return link;
}
template <class T>
LinkedList<T>::LinkedList(){
	head=NULL;
}
template <class T>
void LinkedList<T>::insert_at_beginning(T key){
	if (head==NULL){
		Node<T>* node=new Node<T> (key);
		head=node;
	}
	else{
		Node<T>* node=new Node<T> (key);
		node->set_link(head);
		head=node;
	}
}
template <class T>
void LinkedList<T>::insert_at_end(T key){
	if (head==NULL){
		Node<T>* node=new Node<T> (key);
		head=node;
	}
	else{
		Node<T>* p=head;
		while(p->get_link()!=NULL){
			p=p->get_link();
		}
		Node<T>* node=new Node<T>(key);
		node->set_link(NULL);
	    p->set_link(node);
	}	
}	
template <class T>
void LinkedList<T>::insert_at_pos(int pos,T key){
	int count=1;
	Node<T>* p=head;
	while (p!=NULL and count<pos-1){
		p=p->get_link();
		count++;
	}
	Node<T>* q=p->get_link();
	Node<T>* node=new Node<T>(key);
	node->set_link(q);
	p->set_link(node);
	
}
template <class T>
void LinkedList<T>::delete_from_front(){
	if (head==NULL){
		cout<<"List is Empty"<<endl;
	}
	else{
		Node<T>* p=head;
		head=head->get_link();
		delete p;
    }
}
template <class T>
void LinkedList<T>::delete_from_end(){
	if (head==NULL){
		cout<<"List is Empty"<<endl;
	}
	else{
		Node<T>* p=head;
		Node<T>* q=p->get_link();
		while(q->get_link()!=NULL){
			p=q;
			q=q->get_link();
		}
		p->set_link(NULL);
		delete(q);
	}
}
template <class T>
void LinkedList<T>::delete_from_pos(int pos){
	if (head==NULL){
		cout<<"List Empty"<<endl;
	}
	else{
		int count=1;
		Node<T>* p=head;
		Node<T>*q=p->get_link();
		while(q->get_link()!=NULL and count<pos-1){
			p=q;
			q=q->get_link();
			count++;
		}
		p->set_link(q->get_link());
		delete(q);
	}
}
template <class T>
void LinkedList<T>::display(){
	Node<T>* p=head;
	while (p!=NULL){
		cout<<p->get_data()<<" ";
		p=p->get_link();
	}
}

