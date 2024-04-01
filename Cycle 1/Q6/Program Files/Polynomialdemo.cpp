#include "Polynomial.cpp"
int main(){
    cout<<"1.Insert polynomial 1"<<endl;
    cout<<"2.Insert polynomial 2"<<endl;
    cout<<"3.Display polynomial 1"<<endl;
    cout<<"4.Display polynomial 2"<<endl;
    cout<<"5.Add polynomials"<<endl;
    cout<<"6.Multiply polynomials"<<endl;
    LinkedList poly1, poly2;
    int choice;
    cout<<endl;
    cout<<"Start(y/n)?:";
    char  ch;
    cin>>ch;
    cout<<endl;
    while(ch=='y'){
    	cout<<"Enter your choice:";
        cin>>choice;
        cout<<endl;
        if (choice==1){
        	    int coef,exp;
                cout<<"Start(y/n)?:";
                char ch;
                cin>>ch;
                while(ch=='y'){
                	cout<<"Enter coefficient and exponent for polynomial 1"<<endl;
                	cin>>coef;
					cin>>exp;
					poly1.insert_at_end(coef,exp);
					cout<<"Do you want to continue(y/n)?:";
					cin>>ch;
				}   
                cout<<endl;
		}
		if (choice==2){
        	    int coef,exp;
                cout<<"Start(y/n)?:";
                char ch;
                cin>>ch;
                while(ch=='y'){
                	cout<<"Enter coefficient and exponent for polynomial 2"<<endl;
                	cin>>coef;
					cin>>exp;
					poly2.insert_at_end(coef,exp);
					cout<<"Do you want to continue(y/n)?:";
					cin>>ch;
				}   
                cout<<endl;
		}
		if (choice==3){
			cout<<"Polynomial 1:";
            poly1.display();
            cout<<endl;
		}
		if (choice==4){
			cout<<"Polynomial 2:";
            poly2.display();		
			cout<<endl;	
		}
		if (choice==5){
			    LinkedList sum=poly1.add(poly2);
                cout<<"Sum of polynomials:";
                sum.display();
                cout<<endl;
		}
		if (choice==6){
				LinkedList pro=poly1.multiply(poly2);
                cout<<"Product of polynomials:";
                pro.display();		
				cout<<endl;	
		}
		cout<<"Do you want to continue with another operation(y/n)?:";
		cin>>ch;
		cout<<endl;
	}
	cout<<"Exiting program,Thank you"<<endl;

    return 0;
}

