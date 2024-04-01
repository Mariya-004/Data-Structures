#include "BalancedBracket.h"
bool BalancedBracket::balanced_bracket(string exp){
    Stack<char> s;
    for (int i=0;i<exp.length();i++){
        if (exp[i] =='(' or exp[i]=='{' or exp[i]=='['){
            s.push(exp[i]);
        } 
		if (exp[i]==')' or exp[i]=='}' or exp[i]==']'){
            if (s.is_empty()){
                return false;
            }
            char top=s.peek();
            if ((exp[i]==')' and top=='(') or (exp[i]=='}' and top=='{') or (exp[i]==']'and top=='[')){
                s.pop();
            } 
			else {
                return false;
            }
        }
    }
    return s.is_empty();
}

