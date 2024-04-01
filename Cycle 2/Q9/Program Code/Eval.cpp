#include"Eval.h"
float Eval::postfix_eval(string exp){	
	Stack<float> s;
	for(int i=0;i<exp.length();i++){
		if(exp[i]=='*'){
			float val1=s.peek();
			s.pop();
			float val2=s.peek();
			s.pop();
			s.push(val1*val2);
		}
		else if(exp[i]=='/'){
			float val1=s.peek();
			s.pop();
			float val2=s.peek();
			s.pop();
			s.push(val2/val1);
		}
		else if(exp[i]=='+'){
			float val1=s.peek();
			s.pop();
			float val2=s.peek();
			s.pop();
			s.push(val1+val2);
		}
		else if(exp[i]=='-'){
			float val1=s.peek();
			s.pop();
			float val2=s.peek();
			s.pop();
			s.push(val2-val1);
		}
		else{
			float op=exp[i]-'0';
			s.push(op);
		}
	}
	return s.peek();
}

