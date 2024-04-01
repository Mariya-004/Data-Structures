#include"Queue.h"
template<class T>
Queue<T>::Queue(int n){
	Rear=-1;
	Front=0;
	size=n;
	Q=new T[n];
}
template<class T>
bool Queue<T>::is_empty(){
	if(Rear==-1){
		return true;
	}
	else{
		return false;
	}
}
template<class T>
bool Queue<T>::is_full(){
	if(Rear==size-1){
		return true;
	}
	return false;
}
template<class T>
void Queue<T>::enqueue(T x){
	if(Rear<size-1){
		Rear=Rear+1;
		Q[Rear]=x;
        cout<<"Element enqueued"<<endl;
	}
	else{
		cout<<"Queue full"<<endl;
}
	
}
template<class T>
void Queue<T>::rollback(){
	for (int i=Front;i<=Rear;i++){
		Q[i-Front]=Q[i];
	}
	Rear=Rear-Front;
	Front=0;
}
template<class T>
void Queue<T>::dequeue(){
	if(is_empty()!=true){
		Front=Front+1;
		rollback();
	}
	else{
		cout<<"Queue is empty"<<endl;
	}
}	
template<class T>
void Queue<T>::display(){
	for(int i=0;i<=Rear;i++){
		cout<<Q[i]<<" ";
	}
	cout<<endl;
}
