#include "Dqueue.h"
template<class T>
Dequeue<T>::Dequeue(int n){
	size=n;
	front=-1;
	back=n;
	Q=new T[n];
}
template <class T>
bool Dequeue<T>::is_full(){
	bool f=false;
	if (front+1==back or front==back){
		f=true;
	}
	return f;
}
template<class T>
bool Dequeue<T>::is_empty(){
	bool e=false;
	if (front==-1 and back==size){
		e=true;
	}
	return e;
}
template<class T>
void Dequeue<T>::insert_front(T data) {
  if (!is_full()){
  	Q[++front]=data;
  	cout<<"Element inserted to the front"<<endl;
  }
  else{
  	cout<<"Overflow"<<endl;
  }
}

template<class T>
void Dequeue<T>::insert_back(T data){
  if (!is_full()){
  	Q[--back]=data;
  	cout<<"Element inserted to the back"<<endl;
  }
  else{
  	cout<<"Overflow"<<endl;
  }
}
template<class T>
void Dequeue<T>::pop_front(){
	if (is_empty()==true){
		cout<<"Underflow"<<endl;
	}
	if (front>-1){
		front--;
	}
}
template<class T>
void Dequeue<T>::pop_back(){
	if (is_empty()==true){
		cout<<"Underflow"<<endl;
		
	}
	if(back<size){
		back++;
	}
	
}

template<class T>
void Dequeue<T>::display(){
	for(int i=front;i>=0;i--){
		cout<<Q[i]<<" ";
	}
	for(int i=size-1;i>=back;i--){
		cout<<Q[i]<<" ";
	}
	cout<<endl;
}



