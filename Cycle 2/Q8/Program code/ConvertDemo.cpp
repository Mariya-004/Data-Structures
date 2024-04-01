#include "Convert.cpp"
int main(){
	Conversion c;
	cout<<"Enter the infix expression without any gaps in between:";
	string in;
	cin>>in;
	cout<<"Postfix Expression:"<<c.infix_to_postfix(in)<<endl;
	cout<<"Infix Expression:"<<c.infix_to_prefix(in)<<endl;
	
}
