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
class LQueue{
    public:
		Node<T>* head;
	public:
		LQueue();
		bool is_full();
		bool is_empty();
		void display();
		void enqueue(T);
		void dequeue();
	
};
