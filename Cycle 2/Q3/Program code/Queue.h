#include<iostream>
using namespace std;
template<class T>
class Queue{
	T* Q;
	int Rear;
	int Front;
	int size;
	public:
		Queue(int);
		bool is_empty();
		bool is_full();
		void enqueue(T);
		void rollback();
		void dequeue();	
		void display();	
};
