#include "TStack.h"
template<class T>
TStack<T>::TStack(int n){
	size=n;
	front=-1;
	back=n;
	arr=new T[n];
}
template <class T>
bool TStack<T>::is_full(){
	bool f=false;
	if (front+1==back or front==back){
		f=true;
	}
	return f;
}
template<class T>
bool TStack<T>::is_empty(){
	bool e=false;
	if (front==-1 and back==size){
		e=true;
	}
	return e;
}
template<class T>
void TStack<T>::push_front(T data) {
  if (!is_full()){
  	arr[++front]=data;
  	cout<<"Element pushed to the front"<<endl;
  }
  else{
  	cout<<"Overflow"<<endl;
  }
}

template<class T>
void TStack<T>::push_back(T data){
  if (!is_full()){
  	arr[--back]=data;
  	cout<<"Element pushed to the back"<<endl;
  }
  else{
  	cout<<"Overflow"<<endl;
  }
}
template<class T>
void TStack<T>::pop_front(){
	if (is_empty()==true){
		cout<<"Stack Underflow"<<endl;
	}
	if (front>-1){
		front--;
	}
}
template<class T>
void TStack<T>::pop_back(){
	if (is_empty()==true){
		cout<<"Stack Underflow"<<endl;
		
	}
	if(back<size){
		back++;
	}
	
}
template <class T>
T TStack<T>::peek_front(){
	if (is_empty()==true){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		return arr[front];
	}
	
}
template <class T>
T TStack<T>::peek_back(){
	if (is_empty()==true){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		return arr[back];
	}
}
template<class T>
void TStack<T>::display(){
	for(int i=front;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	for(int i=size-1;i>=back;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

