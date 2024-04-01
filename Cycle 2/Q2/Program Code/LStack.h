#include<iostream>
using namespace std;
template <class T>
class Node{
	private:
		T data;
		Node *link;
	public:
		Node(T);
		T get_data();
		void set_link(Node*);
		Node* get_link();
};
template <class T>
class Stack{
    public:
		Node<T>* head;
	public:
		Stack();
		void display();
		void push(T);
		void pop();
		T peek();
	
};
