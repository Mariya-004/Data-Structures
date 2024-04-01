#include "LQueue.h"
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
LQueue<T>::LQueue(){
	head=NULL;
}
template <class T>
bool LQueue<T>::is_full(){
	
}
template <class T>
bool LQueue<T>::is_empty(){
	if (head==NULL){
		return true;
	}
	else{
		return false;
	}
}
template <class T>
void LQueue<T>::enqueue(T key){
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
void LQueue<T>::dequeue(){
	Node<T>* p=head;
	if (head==NULL){
		cout<<"Queue is Empty,Underflow"<<endl;
	}
	else{
		head=head->get_link();
		delete p;
	}
	  
}
template <class T>
void LQueue<T>::display(){
	Node<T>* p=head;
	while (p!=NULL){
		cout<<p->get_data()<<" ";
		p=p->get_link();
	}
	cout<<endl;
}
