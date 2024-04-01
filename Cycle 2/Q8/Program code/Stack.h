#include<iostream>
using namespace std;
template <class T>
class Stack{
	public:
		T S[100];
		int top;
		int size;
		Stack();
	    bool is_empty();
		bool is_full();
		void push(T);
		void pop();
		T peek();
		void display();
};
