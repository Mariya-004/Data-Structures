#include "LQueue.cpp"
int main() {
    cout<<"Enter 1 to enqueue an element"<<endl;
    cout<<"Enter 2 to dequeue an element"<<endl;
    cout<<"Enter 3 to check if the queue is empty"<<endl;
    cout<<"Enter 4 to display the queue"<<endl;
    cout<<endl;
    cout<<"Start the program (y/n)?:";
    char choice;
    cin>>choice;
    cout<<endl;
    while (choice=='y') {
        cout<<"Enter 1 to create an integer queue"<<endl;
        cout<<"Enter 2 to create a float queue"<<endl;
        cout<<"Enter 3 to create a character queue"<<endl;
        cout<<"Enter your choice:";
        int opt;
        cin>>opt;
        cout<<endl;
        if (opt==1) {
            LQueue<int> myQueue;
            cout<<"Start performing operations(y/n)?:";
            char ch;
            cin>>ch;
            cout<<endl;
            while (ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if (op==1) {
                    cout<<"Enqueue an element"<<endl;
                    cout<<"Enter the element:";
                    int elem;
                    cin>>elem;
                    myQueue.enqueue(elem);
                    cout<<"Element enqueued"<<endl;
                    cout<<endl;
                }
                if (op==2) {
                    cout<<"Dequeue an element"<<endl;
                    if(myQueue.is_empty()==false){
						cout<<"Element dequeued"<<endl;
				    }
                    myQueue.dequeue();
                    cout<<endl;
                }
                if (op==3) {
                    cout<<"Check if the queue is empty"<<endl;
                    bool isEmpty = myQueue.is_empty();
                    if (isEmpty==true){
                    	cout<<"Queue is empty: "<<endl;
					}
                    else{
                    	cout<<"Queue not empty"<<endl;
					}
                    cout<<endl;
                }
                if (op==4) {
                    cout<<"Displaying the queue"<<endl;
                    myQueue.display();
                    cout<<endl;
                }

                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
        }
        if (opt==2) {
            LQueue<float> myQueue;
            cout<<"Start performing operations(y/n)?:";
            char ch;
            cin>>ch;
            cout<<endl;
            while (ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if (op==1) {
                    cout<<"Enqueue an element"<<endl;
                    cout<<"Enter the element:";
                    float elem;
                    cin>>elem;
                    myQueue.enqueue(elem);
                    cout<<"Element enqueued"<<endl;
                    cout<<endl;
                }
                if (op==2) {
                    cout<<"Dequeue an element"<<endl;
                    if(myQueue.is_empty()==false){
						cout<<"Element dequeued"<<endl;
				    }
                    myQueue.dequeue();
                    cout<<endl;
                }
                if (op==3) {
                    cout<<"Check if the queue is empty"<<endl;
                    bool isEmpty = myQueue.is_empty();
                    if (isEmpty==true){
                    	cout<<"Queue is empty"<<endl;
					}
                    else{
                    	cout<<"Queue not empty"<<endl;
					}
                    cout<<endl;
                }
                if (op==4) {
                    cout<<"Displaying the queue"<<endl;
                    myQueue.display();
                    cout<<endl;
                }

                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
        }
        if (opt==3) {
            LQueue<char> myQueue;
            cout<<"Start performing operations(y/n)?:";
            char ch;
            cin>>ch;
            cout<<endl;
            while (ch=='y') {
                cout<<"Enter your choice:";
                int op;
                cin>>op;
                cout<<endl;
                if (op==1) {
                    cout<<"Enqueue an element"<<endl;
                    cout<<"Enter the element:";
                    char elem;
                    cin>>elem;
                    myQueue.enqueue(elem);
                    cout<<"Element enqueued"<<endl;
                    cout<<endl;
                }
                if (op==2) {
                    cout<<"Dequeue an element"<<endl;
                    if(myQueue.is_empty()==false){
						cout<<"Element dequeued"<<endl;
				    }
                    myQueue.dequeue();
                    cout<<endl;
                }
                if (op==3) {
                    cout<<"Check if the queue is empty"<<endl;
                    bool isEmpty=myQueue.is_empty();
                    if (isEmpty==true){
                    	cout<<"Queue is empty: "<<endl;
					}
                    else{
                    	cout<<"Queue not empty"<<endl;
					}
                    cout<<endl;
                }
                if (op==4) {
                    cout<<"Displaying the queue"<<endl;
                    myQueue.display();
                    cout<<endl;
                }

                cout<<"Do you want to continue (y/n)?:";
                cin>>ch;
                cout<<endl;
            }
            
        }
        cout<<"Continue with another template (y/n):";
        cin>>choice;
        cout<<endl;
    }
    cout<<"Exiting program. Thank you!"<<endl;
    return 0;
}

