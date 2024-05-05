#include<iostream>
using namespace std;
class Tree{
	private:
		int* tree;
		int size;
	public:
		Tree(int);
		void set_root(int);
		void set_left(int,int);
		void set_right(int,int);
		void in_order(int);
		void pre_order(int);
		void post_order(int);
};
