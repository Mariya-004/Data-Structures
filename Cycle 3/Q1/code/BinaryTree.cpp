#include "BinaryTree.h"
Tree::Tree(int size){
	this->size=size;
	tree=new int[size];
	for (int i=0;i<size;i++){
		tree[i]=-1;
	}
}
void Tree::set_root(int num){
	if(tree[0]==-1){
		tree[0]=num;
	}
	else{
		cout<<"Tree already has a root"<<endl;
	}
}
void Tree::set_left(int key,int parent){
	if (tree[parent]==-1){
		cout<<"No parent"<<endl;
	}
	else{
		tree[(parent*2)+1]=key;
	}
}
void Tree::set_right(int key,int parent){
	if (tree[parent]==-1){
		cout<<"No parent"<<endl;
	}
	else{
		tree[(parent*2)+2]=key;
	}
}
void Tree::in_order(int index){
	if (index>=size || tree[index]==-1){
		return;
	}
	else{
		in_order((2*index)+1);
		cout<<tree[index]<<" ";
		in_order((2*index)+2);
	}
}
void Tree::pre_order(int index){
	if (index>=size|| tree[index]==-1){
		return;
	}
	else{
		cout<<tree[index]<<" ";
		pre_order((2*index)+1);
		pre_order((2*index)+2);
	}
}
void Tree::post_order(int index){
	if (index>=size || tree[index]==-1){
		return;
	}
	else{
		post_order((2*index)+1);
		post_order((2*index)+2);
		cout<<tree[index]<<" ";
	}
}

