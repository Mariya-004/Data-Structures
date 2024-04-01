#include "Stack.cpp"
int main(){
	cout<<"***Stack Operations***"<<endl;
	cout<<"Enter 1 to push elements to stack"<<endl;
	cout<<"Enter 2 to pop an element from stack"<<endl;
	cout<<"Enter 3 to check whether stack is empty"<<endl;
	cout<<"Enter 4 to check whether stack if full"<<endl;
	cout<<"Enter 5 to demonstrate overflow"<<endl;
	cout<<"Enter 6 to demonstrate underflow"<<endl;
	cout<<"Enter 7 to display stack"<<endl;
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
			Stack<int> myStack;
			Stack<int> myStack2;
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
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Popping an element from stack"<<endl;
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
					cout<<"Demonstrating stack overflow"<<endl;
					for (int i=0;i<101;i++){
						myStack.push(i);
					}
					myStack.display();
					cout<<endl;
				}
				if (op==6){
					cout<<"Demonstrating Underflow"<<endl;
				    cout<<"Pop stack(y/n)?";
					char choice;
					cin>>choice;
					if (choice=='y'){
						myStack2.pop();
					}
					cout<<endl;		
				}
				if (op==7){
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
			Stack<float> myStack;
			Stack<float> myStack2;
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
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Popping an element from stack"<<endl;
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
					cout<<"Demonstrating stack overflow"<<endl;
					for (int i=0;i<101;i++){
						myStack.push(5.5);
					}
					myStack.display();
					cout<<endl;
				}
				if (op==6){
					cout<<"Demonstrating Underflow"<<endl;
				    cout<<"Pop stack(y/n)?";
					char choice;
					cin>>choice;
					if (choice=='y'){
						myStack2.pop();
					}
					cout<<endl;		
				}
				if (op==7){
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
			Stack<char> myStack;
			Stack<char> myStack2;
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
					cout<<"Element inserted"<<endl;
					cout<<endl;
				}
				if (op==2){
					cout<<"Popping an element from stack"<<endl;
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
					cout<<"Demonstrating stack overflow"<<endl;
					for (int i=0;i<101;i++){
						myStack.push('a');
					}
					myStack.display();
					cout<<endl;
				}
				if (op==6){
					cout<<"Demonstrating Underflow"<<endl;
				    cout<<"Pop stack(y/n)?";
					char choice;
					cin>>choice;
					if (choice=='y'){
						myStack2.pop();
					}
					cout<<endl;		
				}
				if (op==7){
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


