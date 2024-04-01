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
class LinkedList{
    public:
		Node<T>* head;
	public:
		LinkedList();
		void display();
		void insert_at_beginning(T);
		void insert_at_end(T);
		void insert_at_pos(int,T);
		void delete_from_front();
		void delete_from_end();
		void delete_from_pos(int);
	
};
