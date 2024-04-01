#include<iostream>
using namespace std;
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
template<class T>
class Dequeue{
	public:
		Node<T>* head;
		bool is_full();
		bool is_empty();
		void insert_front(T);
		void insert_back(T);
		void pop_front();
		void pop_back();
		void display();
};
