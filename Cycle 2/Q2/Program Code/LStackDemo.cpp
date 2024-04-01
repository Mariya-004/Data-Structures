#include "LStack.cpp"

int main() {
    cout<<"Enter 1 to push an element onto the stack"<<endl;
    cout<<"Enter 2 to pop an element from the stack"<<endl;
    cout<<"Enter 3 to display the stack"<<endl;
    cout<<endl;
    cout<<"Start the program (y/n)?:";
    char choice;
    cin>>choice;
    cout<<endl;
    while(choice=='y') {
        cout<<"Enter 1 to create an integer stack"<<endl;
        cout<<"Enter 2 to create a float stack"<<endl;
        cout<<"Enter 3 to create a character stack"<<endl;
        cout<<"Enter your choice:";
        int opt;
        cin>>opt;
        cout<<endl;

        if(opt==1) {
            Stack<int> myStack;
            char ch='y';
            while(ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if(op==1) {
                    cout<<"Pushing an element onto the stack"<<endl;
                    cout<<"Enter the element:";
                    int data;
                    cin>>data;
                    myStack.push(data);
                    cout<<"Element pushed onto the stack"<<endl;
                    cout<<endl;
                } 
                if(op==2) {
                    cout<<"Popping an element from the stack"<<endl;
                    int peeked=myStack.peek();
                    if (myStack.head!=NULL){
                    	cout<<"Top element:"<<peeked<<endl;;
					}
                    myStack.pop();
                    cout<<endl;
                } 
                if(op==4) {
                    cout<<"Displaying the stack"<<endl;
                    myStack.display();
                    cout<<endl;
                }
                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
        }
        if(opt==2) {
            Stack<float> myStack;
            char ch='y';
            while(ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if(op==1) {
                    cout<<"Pushing an element onto the stack"<<endl;
                    cout<<"Enter the element:";
                    float data;
                    cin>>data;
                    myStack.push(data);
                    cout<<"Element pushed onto the stack"<<endl;
                    cout<<endl;
                } 
                if(op==2) {
                    cout<<"Popping an element from the stack"<<endl;
                    float peeked=myStack.peek();
                    if (myStack.head!=NULL){
                    	cout<<"Top element:"<<peeked<<endl;;
					}
                    myStack.pop();
                    cout<<endl;
                } 
                if(op==3) {
                    cout<<"Displaying the stack"<<endl;
                    myStack.display();
                    cout<<endl;
                }

                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
        }
        if(opt==3) {
            Stack<char> myStack;
            char ch = 'y';
            while(ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if(op==1) {
                    cout<<"Pushing an element onto the stack"<<endl;
                    cout<<"Enter the element:";
                    char data;
                    cin>>data;
                    myStack.push(data);
                    cout<<"Element pushed onto the stack"<<endl;
                    cout<<endl;
                } 
                if(op==2) {
                    cout<<"Popping an element from the stack"<<endl;
                    char peeked=myStack.peek();
                    if (myStack.head!=NULL){
                    	cout<<"Top element:"<<peeked<<endl;;
					}
                    myStack.pop();
                    cout<<endl;
                } 
                if(op==3) {
                    cout<<"Displaying the stack"<<endl;
                    myStack.display();
                    cout<<endl;
                }
                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
        }
        cout<<"Continue with another data type (y/n):";
        cin>>choice;
        cout<<endl;
    }
    cout<<"Exiting program. Thank you!"<<endl;
    return 0;
}

