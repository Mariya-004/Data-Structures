#include<iostream>
using namespace std;
class Node{
	private:
		int coef,exp;
		Node *link;
	public:
		Node(int,int);
		int get_coef();
		int get_exp();
		void set_link(Node*);
		Node* get_link();
};
class LinkedList{
    public:
		Node* head;
	public:
		LinkedList();
		void display();
		void insert_at_end(int,int);
		LinkedList add(LinkedList&);
		LinkedList multiply(LinkedList&);
		
		
};
