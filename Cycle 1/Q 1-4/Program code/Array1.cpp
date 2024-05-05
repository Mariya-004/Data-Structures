#include "Array.h"
#include<cstring>
#include<limits>
template <class T>
Array<T>::Array(){
	LB=1;
	UB=0;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
}
template <class T>
int Array<T>::get_LB(){
	return LB;
}
template <class T>
int Array<T>::get_UB(){
	return UB;
}
template <class T>
void Array<T>::insert_at_beg(T key){
	if (UB==0){
		A[LB]=key;
		UB++;
	}
	else{
		UB++;
		int k=UB-1;
		while (k>=LB){
			A[k+1]=A[k];
			k--;
		}
		A[LB]=key;
	}
}
template <class T>
void Array<T>::insert_at_end(T key){
	UB=UB+1;
	A[UB]=key;
}
template <class T>
void Array<T>::insertion_at_position(int pos,T key){
	UB=UB+1;
	int k=UB-1;
	while (k>=pos){
		A[k+1]=A[k];
		k--;
	}
	A[pos]=key;
}
template <class T>
void Array<T>::delete_at_beg(){
	int k=LB;
	while (k<=UB){
		A[k]=A[k+1];
		k++;
	}
	UB--;
}
template <class T>
void Array<T>::delete_at_end(){
	UB=UB-1;
}
template <class T>
void Array<T>::delete_at_index(int pos){
	int k=pos+1;
	while (k<=UB){
		A[k-1]=A[k];
		k++;
	}
	UB--;
}
template <class T>
int Array<T>::get_index(T ele){
	int ind=-1;
	for (int i=LB;i<=UB;i++){
		if (A[i]==ele){
			ind=i;
			break;
		}
	}
	return ind;
}
template <class T>
void Array<T>::swap(int p,int q){
	T temp=A[p];
	A[p]=A[q];
	A[q]=temp;
}
template <class T>
int Array<T>::partition(int LB,int UB){
	int j=LB-1;
	T pivot=A[UB];
	int i=LB;
	while (i<=UB-1){
		if (A[i]<pivot){
			j=j+1;
			swap(i,j);
		}
		i=i+1;
	}
	swap(j+1,UB);
	return j+1;
}
template <class T>
void Array<T>::quick_sort(int LB,int UB){
    if (LB < UB) {
        int p = partition(LB, UB);
        quick_sort(LB,p-1);
        quick_sort(p+1,UB);
    }
}
template<class T>
void Array<T>::rotate_clockwise(int pos){
	int i,j;
	 for(int i=0;i<pos;i++){
        T temp=A[UB];
        for(int j=UB;j>LB;j--){
            A[j]=A[j-1];
        }
        A[LB]=temp;
    }
}

template<class T>
void Array<T>::rotate_anticlockwise(int pos){
    for(int i=LB;i<=pos;i++){
        T temp=A[LB];
        for(int j=LB;j<=UB-1;j++){
            A[j]=A[j+1];
        }
        A[UB]=temp;
    } 
}
template <class T>
void Array<T>::frequency(){
	int i;
	int count=1;
	quick_sort(LB,UB);
	cout<<"Element"<<"		"<<"Frequency"<<endl;
	for (i=LB;i<=UB;i++){
		if (A[i]==A[i+1]){
			count++;
		}
		else{		
			cout<<A[i]<<"		"<<count<<endl;	
			count=1;
		}
	}
}
template<class T>
void Array<T>::distinct(){
	cout<<"Distinct elements are:";
	int i,j;
	for (i=LB;i<=UB;i++){
		int count=0;
		for (j=LB;j<=UB;j++){
			if (A[j]==A[i]){
				count=count+1;
			}
		}
		if (count==1){
			cout<<A[i]<<" ";
		}
	}
}
template <class T>
void Array<T>::display(){
	for (int i=LB;i<=UB;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
}
