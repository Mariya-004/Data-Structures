#include<iostream>
using namespace std;
template <class T>
class Stack{
	public:
		T* S;
		int top;
		int size;
		Stack(int);
	    bool is_empty();
		bool is_full();
		void push(T);
		void pop();
		T peek();
		void display();
};
