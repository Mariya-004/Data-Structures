#include "LStack.h"
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
Stack<T>::Stack(){
	head=NULL;
}
template <class T>
void Stack<T>::push(T key){
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
void Stack<T>::pop(){
	Node<T>* p=head;
	if (head==NULL){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		T data=peek();
		cout<<"Element "<<data<<" popped out of stack"<<endl;
		head=head->get_link();
		delete p; 
	} 
}
template <class T>
T Stack<T>::peek(){
	head->get_data();
}
template <class T>
void Stack<T>::display(){
	Node<T>* p=head;
	while (p!=NULL){
		cout<<p->get_data()<<" ";
		p=p->get_link();
	}
	cout<<endl;
}

