#include "Array.cpp"
int main(){
	cout<<"***Array Operations***"<<endl;
	cout<<"Enter 1 to insert elements to the beginning of the array"<<endl;
	cout<<"Enter 2 to insert elements to the end of the array"<<endl;
	cout<<"Enter 3 to insert element to a specified position"<<endl;
	cout<<"Enter 4 to delete an element from beginning"<<endl;
	cout<<"Enter 5 to delete an element from end"<<endl;
	cout<<"Enter 6 to delete an element from an index"<<endl;
	cout<<"Enter 7 to get the index of an element"<<endl;
	cout<<"Enter 8 to display"<<endl;
	cout<<"Enter 9 to perform left rotation on array"<<endl;
	cout<<"Enter 10 to perform right rotation on array"<<endl;
	cout<<"Enter 11 to print the frquency table of the array"<<endl;
	cout<<"Enter 12 to print the distinct elements of the array"<<endl;
	cout<<endl;
	cout<<"Start the program(y/n)?:";
	char choice;
	cin>>choice;
	cout<<endl;
	while (choice=='y'){
		cout<<"Enter 1 to create integer array"<<endl;
		cout<<"Enter 2 to create floating point array"<<endl;
		cout<<"Enter 3 to create character array"<<endl;
		cout<<"Enter your choice:";
		int opt;
		cin>>opt;
		if (opt==1){
			cout<<endl;
			Array<int> myArray;
			cout<<"Start performing operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){
				cout<<"Enter your choice:";	
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myArray.insert_at_beg(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myArray.insert_at_end(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myArray.insertion_at_position(pos,k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myArray.delete_at_beg();
					cout<<"Element deleted"<<endl;
					cout<<endl;
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
					myArray.delete_at_end();
					cout<<"Element deleted"<<endl;
					cout<<endl;
				}
				if (op==6){
					cout<<"Deleting from an index"<<endl;
					cout<<"Enter the index:";
					int ind;
					cin>>ind;
					myArray.delete_at_index(ind);
					cout<<"Element deleted"<<endl;
					cout<<endl;		
						
				}
				if (op==7){
					cout<<"Finding the index of an element"<<endl;
					cout<<"Enter the element:";
					int ele;
					cin>>ele;
					int ind=myArray.get_index(ele);
					if (ind==-1){
						cout<<"Element not found"<<endl;
					}
					else{
						cout<<"Element found at position:"<<ind<<endl;
					}
					cout<<endl;
				}
				if (op==8){
					cout<<"The array is:";
					myArray.display();
				}
				if (op==9){
					cout<<"Left Rotation"<<endl;
					cout<<"Enter the number of positions to rotate:";
					int pos;
					cin>>pos;
					myArray.rotate_anticlockwise(pos);
					cout<<"Array rotated left by "<<pos<<" positions"<<endl;
					cout<<endl;
				}
				if (op==10){
					cout<<"Right Rotation"<<endl;
					cout<<"Enter the number of positions to rotate:";
					int pos;
					cin>>pos;
					myArray.rotate_clockwise(pos);
					cout<<"Array rotated right by "<<pos<<" positions"<<endl;
					cout<<endl;
				}
				if (op==11){
					cout<<"Frequency Table"<<endl;
					myArray.frequency();
					cout<<endl;
				}
				if (op==12){
					myArray.distinct();
					cout<<endl;
					cout<<endl;
				}
				cout<<"Do you want to continue performing operations on the same array(y/n)?:";
				cin>>ch;
				cout<<endl;
			}
		}
		if (opt==2){
			cout<<endl;
			Array<float> myArray;
			cout<<"Start performing operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){
				cout<<"Enter your choice:";
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					float k;
					cin>>k;
					myArray.insert_at_beg(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
				    float k;
					cin>>k;
					myArray.insert_at_end(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					float k;
					cin>>k;
					myArray.insertion_at_position(pos,k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myArray.delete_at_beg();
					cout<<"Elemented deleted"<<endl;
					cout<<endl;
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
					myArray.delete_at_end();
					cout<<"Elemented deleted"<<endl;
					cout<<endl;
				}
				if (op==6){
					cout<<"Deleting from an index"<<endl;
					cout<<"Enter the index:";
					int ind;
					cin>>ind;
					myArray.delete_at_index(ind);
					cout<<"Elemented deleted"<<endl;	
					cout<<endl;
				}
				if (op==7){
					cout<<"Finding the index of an element"<<endl;
					cout<<"Enter the element:";
					float ele;
					cin>>ele;
					int ind=myArray.get_index(ele);
					if (ind==-1){
						cout<<"Element not found"<<endl;
					}
					else{
						cout<<"Element found at position:"<<ind<<endl;
					}
					cout<<endl;
				}
				if (op==8){
					cout<<"The array is:";
					myArray.display();
				}						
				if (op==9){
					cout<<"Left Rotation"<<endl;
					cout<<"Enter the number of positions to rotate:";
					int pos;
					cin>>pos;
					myArray.rotate_anticlockwise(pos);
					cout<<"Array rotated left by "<<pos<<" positions"<<endl;
					cout<<endl;
				}
				if (op==10){
					cout<<"Right Rotation"<<endl;
					cout<<"Enter the number of positions to rotate:";
					int pos;
					cin>>pos;
					myArray.rotate_clockwise(pos);
					cout<<"Array rotated right by "<<pos<<" positions"<<endl;
					cout<<endl;
				}
				if (op==11){
					cout<<"Frequency Table"<<endl;
					myArray.frequency();
					cout<<endl;
				}
				if (op==12){
					myArray.distinct();
					cout<<endl;
					cout<<endl;
				}
				cout<<"Do you want to continue performing operations on the same array(y/n)?:";
				cin>>ch;
				cout<<endl;
			}
		}
		if (opt==3){
			cout<<endl;
			Array<char> myArray;
			cout<<"Start performing operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){
				cout<<"Enter your choice:";
				int op;
				cin>>op;
				if (op==1){
					cout<<"Insertion at beginning"<<endl;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myArray.insert_at_beg(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Insertion at end"<<endl;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myArray.insert_at_end(k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==3){
					cout<<"Insertion at position"<<endl;
					cout<<"Enter the position:";
					int pos;
					cin>>pos;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myArray.insertion_at_position(pos,k);
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==4){
					cout<<"Deleting from beginning"<<endl;
					myArray.delete_at_beg();
					cout<<"Element deleted"<<endl;
					cout<<endl;
				}
				if (op==5){
					cout<<"Deleting from end"<<endl;
					myArray.delete_at_end();
					cout<<"Element deleted"<<endl;
					cout<<endl;
				}
				if (op==6){
					cout<<"Deleting from an index"<<endl;
					cout<<"Enter the index:";
					int ind;
					cin>>ind;
					myArray.delete_at_index(ind);
					cout<<"Element deleted"<<endl;	
					cout<<endl;	
				}
				if (op==7){
					cout<<"Finding the index of an element"<<endl;
					cout<<"Enter the element:";
					char ele;
					cin>>ele;
					int ind=myArray.get_index(ele);
					if (ind==-1){
						cout<<"Element not found"<<endl;
					}
					else{
						cout<<"Element found at position:"<<ind<<endl;
					}
					cout<<endl;
				}
				if (op==8){
					cout<<"The array is:";
					myArray.display();
				}							
				if (op==9){
					cout<<"Left Rotation"<<endl;
					cout<<"Enter the number of positions to rotate:";
					int pos;
					cin>>pos;
					myArray.rotate_anticlockwise(pos);
					cout<<"Array rotated left by "<<pos<<" positions"<<endl;
					cout<<endl;
				}
				if (op==10){
					cout<<"Right Rotation"<<endl;
					cout<<"Enter the number of positions to rotate:";
					int pos;
					cin>>pos;
					myArray.rotate_clockwise(pos);
					cout<<"Array rotated right by "<<pos<<" positions"<<endl;
					cout<<endl;
				}
				if (op==11){
					cout<<"Frequency Table"<<endl;
					myArray.frequency();
					cout<<endl;
				}
				if (op==12){
					myArray.distinct();
					cout<<endl;
					cout<<endl;
				}
				cout<<"Do you want to continue performing operations on the same array(y/n)?:";
				cin>>ch;
				cout<<endl;
			}		
		}
		cout<<"Continue with another template(y/n):";
		cin>>choice ;
		cout<<endl;
		}
	cout<<"Exiting program,Thank you!"<<endl;
}
