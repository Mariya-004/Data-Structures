#include "Stack.cpp"
int main(){
	cout<<"***Stack Operations***"<<endl;
	cout<<"Enter 1 to push elements to stack"<<endl;
	cout<<"Enter 2 to pop an element from stack"<<endl;
	cout<<"Enter 3 to check whether stack is empty"<<endl;
	cout<<"Enter 4 to check whether stack if full"<<endl;
	cout<<"Enter 5 to display stack"<<endl;
	cout<<endl;
	cout<<"Start the program(y/n)?:";
	char choice;
	cin>>choice;
	cout<<endl;
	while (choice=='y'){
		cout<<"Enter 1 to create integer stack"<<endl;
		cout<<"Enter 2 to create floating point stack"<<endl;
		cout<<"Enter 3 to create character stack"<<endl;
		cout<<"Enter your choice:";
		int opt;
		cin>>opt;
		cout<<endl;
		if (opt==1){
			cout<<"Enter the size:";
			int s;
			cin>>s;
			Stack<int> myStack(s);
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){
				cout<<"Enter your choice:";				
				int op;
				cin>>op;
				if (op==1){
					cout<<"Pushing an element to stack"<<endl;
					cout<<"Enter the key:";
					int k;
					cin>>k;
					myStack.push(k);
					cout<<endl;
				}
				if (op==2){
					cout<<"Popping an element from stack"<<endl;
					int popped=myStack.peek();
					if (myStack.is_empty()==false){
						cout<<"Popped element:"<<popped<<endl;
					}
					myStack.pop();
					cout<<endl;					
				}
				if (op==3){
					cout<<"Checking if the stack is empty"<<endl;
					bool em=myStack.is_empty();
					if ( em==true){
						cout<<"Stack is empty"<<endl;
					}
					else {
						cout<<"Stack is not empty"<<endl;
					}
					cout<<endl;
				}
				if (op==4){
					cout<<"Checking if stack is full"<<endl;
					bool em=myStack.is_full();
					if (em==true){
						cout<<"Stack is full"<<endl;
					}
					else {
						cout<<"Stack is not full"<<endl;
					}
					cout<<endl;					
				}
				if (op==5){
					cout<<"The stack is:";
					myStack.display();
					cout<<endl;
					cout<<endl;		
				}
				cout<<"Do you want to continue(y/n)?:";
				cin>>ch;
				cout<<endl;
			}
		}
				
		if (opt==2){
			cout<<"Enter the size:";
			int s;
			cin>>s;
			Stack<float> myStack(s);
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){
				cout<<"Enter your choice:";				
				int op;
				cin>>op;
				if (op==1){
					cout<<"Pushing an element to stack"<<endl;
					cout<<"Enter the key:";
					float k;
					cin>>k;
					myStack.push(k);
					cout<<endl;
				}
				if (op==2){
					cout<<"Popping an element from stack"<<endl;
					float popped=myStack.peek();
					if (myStack.is_empty()==false){
						cout<<"Popped element:"<<popped<<endl;
					}
					myStack.pop();
					cout<<endl;					
				}
				if (op==3){
					cout<<"Checking if the stack is empty"<<endl;
					bool em=myStack.is_empty();
					if ( em==true){
						cout<<"Stack is empty"<<endl;
					}
					else {
						cout<<"Stack is not empty"<<endl;
					}
					cout<<endl;
				}
				if (op==4){
					cout<<"Checking if stack is full"<<endl;
					bool em=myStack.is_full();
					if (em==true){
						cout<<"Stack is full"<<endl;
					}
					else {
						cout<<"Stack is not full"<<endl;
					}
					cout<<endl;					
				}
				if (op==5){
					cout<<"The stack is:";
					myStack.display();
					cout<<endl;
					cout<<endl;		
				}
				cout<<"Do you want to continue(y/n)?:";
				cin>>ch;
				cout<<endl;
			}
		}
		if (opt==3){
			cout<<"Enter the size:";
			int s;
			cin>>s;
			Stack<char> myStack(s);
			cout<<"Start operations(y/n)?:";
			char ch;
			cin>>ch;
			cout<<endl;
			while(ch=='y'){
				cout<<"Enter your choice:";				
				int op;
				cin>>op;
				if (op==1){
					cout<<"Pushing an element to stack"<<endl;
					cout<<"Enter the key:";
					char k;
					cin>>k;
					myStack.push(k);
					cout<<endl;
				}
				if (op==2){
					cout<<"Popping an element from stack"<<endl;
					char popped=myStack.peek();
					if (myStack.is_empty()==false){
						cout<<"Popped element:"<<popped<<endl;
					}
					myStack.pop();
					cout<<endl;					
				}
				if (op==3){
					cout<<"Checking if the stack is empty"<<endl;
					bool em=myStack.is_empty();
					if ( em==true){
						cout<<"Stack is empty"<<endl;
					}
					else {
						cout<<"Stack is not empty"<<endl;
					}
					cout<<endl;
				}
				if (op==4){
					cout<<"Checking if stack is full"<<endl;
					bool em=myStack.is_full();
					if (em==true){
						cout<<"Stack is full"<<endl;
					}
					else {
						cout<<"Stack is not full"<<endl;
					}
					cout<<endl;					
				}
				if (op==5){
					cout<<"The stack is:";
					myStack.display();
					cout<<endl;
					cout<<endl;
					
				}
				cout<<"Do you want to continue(y/n)?:";
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


