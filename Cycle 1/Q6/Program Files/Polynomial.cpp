#include "Polynomial.h"
Node::Node(int coef,int exp){
	this->coef=coef;
	this->exp=exp;
	this->link=NULL;
}
int Node::get_coef(){
	return coef;
}
int Node::get_exp(){
	return exp;
}
void Node::set_link(Node* link){
	this->link=link;
}
Node* Node::get_link(){
	return link;
}
LinkedList::LinkedList(){
	head=NULL;
}
void LinkedList::insert_at_end(int coef,int pow){
	if (head==NULL){
		Node* node=new Node(coef,pow);
		head=node;
	}
	else{
		Node* p=head;
		while(p->get_link()!=NULL){
			p=p->get_link();
		}
		Node* node=new Node(coef,pow);
		node->set_link(NULL);
	    p->set_link(node);
	}	
}	
LinkedList LinkedList::add(LinkedList& l){
	Node* p=head;
	Node* q=l.head;
	LinkedList result;
	while (p!=NULL and q!=NULL){
		if (p->get_exp()==q->get_exp()){
			result.insert_at_end(p->get_coef()+q->get_coef(),p->get_exp());
			p=p->get_link();
			q=q->get_link();
		}
		else if(p->get_exp()>q->get_exp()){
			result.insert_at_end(p->get_coef(),p->get_exp());
			p=p->get_link();
		}
		else{
			result.insert_at_end(q->get_coef(),q->get_exp());
			q=q->get_link();
		}
	}
	return result;
}
LinkedList LinkedList::multiply(LinkedList&l){
	Node*p=head;
	LinkedList result;
	while(p!=NULL){
		Node*q=l.head;
		while(q!=NULL){
			result.insert_at_end(p->get_coef()*q->get_coef(),p->get_exp()+q->get_exp());
			q=q->get_link();
		}
		p=p->get_link();
	}
	return result;
}
void LinkedList::display(){
	Node* p=head;
	cout<<"The polynomial is:";
	while (p!=NULL){
		cout<<p->get_coef()<<"x^";
		cout<<p->get_exp()<<" ";
		p=p->get_link();
	}
	cout<<endl;
}

