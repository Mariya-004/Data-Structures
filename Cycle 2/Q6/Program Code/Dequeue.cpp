#include "Deque.h"
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
template<class T>
void Dequeue<T>::insert_front(T data) {
		if (head==NULL){
		Node<T>* node=new Node<T> (data);
		head=node;
	}
	else{
		Node<T>* node=new Node<T> (data);
		node->set_link(head);
		head=node;
	}
	cout<<"Element inserted to front"<<endl;
}


template<class T>
void Dequeue<T>::insert_back(T data){
	if (head==NULL){
		Node<T>* node=new Node<T> (data);
		head=node;
	}
	else{
		Node<T>* p=head;
		while(p->get_link()!=NULL){
			p=p->get_link();
		}
		Node<T>* node=new Node<T>(data);
		node->set_link(NULL);
	    p->set_link(node);
	}
  	cout<<"Element inserted to the back"<<endl;
  
}
template<class T>
void Dequeue<T>::pop_front(){
	if (head==NULL){
		cout<<"Deque is Empty"<<endl;
	}
	else{
		Node<T>* p=head;
		head=head->get_link();
		delete p;
    }
}
template<class T>
void Dequeue<T>::pop_back(){
		if (head==NULL){
		cout<<"Deque is Empty"<<endl;
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

template<class T>
void Dequeue<T>::display(){
	Node<T>* p=head;
	while (p!=NULL){
		cout<<p->get_data()<<" ";
		p=p->get_link();
	}
	cout<<endl;
}



