#include<iostream>
using namespace std;
template <class T>
class TStack{
	private:
		int size;
		int front;
		int back;
		T * arr;
	public:
		TStack(int);
		bool is_full();
		bool is_empty();
		void push_front(T);
		void push_back(T);
		void pop_front();
		void pop_back();
		T peek_front();
		T peek_back();
		void display();
};
