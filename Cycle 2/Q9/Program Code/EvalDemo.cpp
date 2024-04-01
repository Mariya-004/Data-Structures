#include"Eval.cpp"
int main(){
	Eval e;
	cout<<"Enter the postfix expression without spaces in between:";
	string exp;
	cin>>exp;
	cout<<"The answer is:"<<e.postfix_eval(exp)<<endl;
}
