#include "DoublyLL.h"
template <class T>
Node<T>::Node(T data){
	this->data=data;
}
template <class T>
void Node<T>::set_plink(Node* plink){
	this->plink=plink;
}
template <class T>
void Node<T>::set_nlink(Node* nlink){
	this->nlink=nlink;
}
template <class T>
T Node<T>::get_data(){
	return data;
}
template <class T>
Node<T>* Node<T>::get_plink(){
	return plink;
}
template <class T>
Node<T>* Node<T>::get_nlink(){
	return nlink;
}
template<class T>
LinkedList<T>::LinkedList(){
	head=NULL;
	tail=NULL;
}

template <class T>
void LinkedList<T>::insert_at_beginning(T key){
	Node<T>* node=new Node<T> (key);
	if (head==NULL){
		head=node;
		tail=node;
		head->set_plink(NULL);
		head->set_nlink(NULL);
	}
	else{
		node->set_nlink(head);
		head->set_plink(node);
		head=node;
		head->set_plink(NULL);
	}
}
template<class T>
void LinkedList<T>::insert_at_end(T key){
	Node<T>* node=new Node<T>(key);
	if(head==NULL){
		head=node;
		tail=node;
	}
	else{
		node->set_plink(tail);
		tail->set_nlink(node);
		tail=node;
		tail->set_nlink(NULL);
		
	}
}
template<class T>
void LinkedList<T>::insert_at_pos(int pos,T key){
	int count=1;
	if (pos==1){
		insert_at_beginning(key);
	}
	else{
		Node<T>* p=head;
		while (p!=NULL and count<pos-1){
			p=p->get_nlink();
			count++;
		}
		Node<T>* node=new Node<T>(key);
		node->set_nlink(p->get_nlink());
		node->set_plink(p);
		p->set_nlink(node);
	}
}
template <class T>
void LinkedList<T>::delete_from_front(){
	if (head==NULL){
		cout<<"List Empty"<<endl;
	}
	else{
		Node<T>* p=head;
		head=head->get_nlink();
		head->set_plink(NULL);
		delete p;
	}

	  
}
template <class T>
void LinkedList<T>::delete_from_end(){
		if (head==NULL){
		cout<<"List Empty"<<endl;
	}
	else{
		Node<T>* p=head;
		Node<T>* q=p->get_nlink();
		while(q->get_nlink()!=NULL){
			p=q;
			q=q->get_nlink();
		}
		p->set_nlink(NULL);
		delete(q);
	}
}
template <class T>
void LinkedList<T>::delete_from_pos(int pos){
		int count=1;
		Node<T>* p=head;
		Node<T>*q=p->get_nlink();
		while(q->get_nlink()!=NULL and count<pos-1){
			p=q;
			q=q->get_nlink();
			count++;
		}
		p->set_nlink(q->get_nlink());
		q->get_nlink()->set_plink(p);
		delete(q);
}

template <class T>
void LinkedList<T>::display(){
	Node<T>* p=head;
	while (p!=NULL){
		cout<<p->get_data()<<" ";
		p=p->get_nlink();
	}
	cout<<endl;
}

