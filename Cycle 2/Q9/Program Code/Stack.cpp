#include"Stack.h"
template <class T>
Stack<T>::Stack(){
	top=-1;
	size=100;
}
template <class T>
bool Stack<T>::is_empty(){
	if (top==-1){
		return true;
	}
	return false;
}
template <class T>
bool Stack<T>::is_full(){
	if (top==size-1){
		return true;
	}
	return false;
}
template <class T>
void Stack<T>::push(T key){
	if(is_full()!=true){
		top=top+1;
		S[top]=key;
	}
	else{
		cout<<"Stack overflow"<<endl;
	}
}
template<class T>
void Stack<T>::pop(){
	if (is_empty()!=true){
		T ele=peek();
		top=top-1;
	}
	else{
		cout<<"Stack Underflow"<<endl;
	}
}
template <class T>
T Stack<T>::peek(){
	if (is_empty()!=true){
		return S[top];
	}
	else{
		cout<<"Stack is empty"<<endl;
		return -1;
	}
}
template <class T>
void Stack<T>::display(){
	for (int i=top;i>=0;i--){
		cout<<S[i]<<" ";
	}
}
