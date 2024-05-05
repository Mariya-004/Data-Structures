#include<iostream>
using namespace std;
template <class T>
class Array{
	private:
		int LB;
		int UB;
		T A[100];
	public:
		Array();
		Array(int,int,T[]);
		int get_LB();
		int get_UB();
		void insert_at_beg(T);
		void insert_at_end(T);
		void insertion_at_position(int,T);
		void delete_at_beg();
		void delete_at_end();
		void delete_at_index(int);
		int get_index(T);		
		void swap(int,int);
	    int partition(int,int);
		void quick_sort(int,int);
		void rotate_anticlockwise(int);
		void rotate_clockwise(int);
		void frequency();
		void distinct();
		void display();
};
