#include "BalancedBracket.cpp"
int main(){
	BalancedBracket b;
	cout<<"Enter the expression:";
	string exp;
	cin>>exp;
	bool bal=b.balanced_bracket(exp);
	if(bal==true){
		cout<<"Brackets are balanced"<<endl;
	}
	else{
		cout<<"Brackets aren't balanced"<<endl;
	}
}

