#include "Convert.h"
#include <algorithm>
Conversion::Conversion(){
    postfix="";
    prefix="";
}
int Conversion::precedence(char op){
    if (op=='^') {
        return 3;
    }
    if(op=='/'or op=='*'){
        return 2;
    }
    if(op=='+'or op =='-'){
        return 1;
    }
	else{
        return 0;
    }
}

string Conversion::infix_to_postfix(string s){
    Stack<char> st;
    string postfix="";

    for(int i=0;i<s.length();i++){
        char ch=s[i];

        if ((ch >='a' and ch<='z')or(ch>='A' and ch<='Z')or(ch>='0' and ch<='9')){
            postfix+=ch;
        } 
		else if (ch=='('){
            st.push('(');
        } 
		else if (ch==')'){
            while (!st.is_empty() and st.peek()!='('){
                postfix+=st.peek();
                st.pop();
            }
            if (!st.is_empty()){
            	st.pop();
        	}
        }
		else {
            while (!st.is_empty() and precedence(ch)<=precedence(st.peek())) {
                postfix+=st.peek();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.is_empty()){
        postfix+=st.peek();
        st.pop();
    }

    return postfix;
}
string Conversion::infix_to_prefix(string s){
    reverse(s.begin(),s.end());
    for (int i= 0;i<s.length();i++){ 
        if (s[i] == '(') {
            s[i]=')';
        }
        else if (s[i] == ')') {
            s[i]='(';
        }
    }
	string pre=infix_to_postfix(s);
	reverse(pre.begin(),pre.end());
	return pre;
	
}
	
		


