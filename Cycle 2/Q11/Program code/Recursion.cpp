#include"Recursion.h"
float fact::factN(float n){
	Stack <float> st(n);
	if(n==1 or n==0){
		return 1;
	}
	else{
		for(int i=1;i<=n;i++){
			st.push(i);
		}
		float fact=st.peek()*(factN(n-1));
		st.pop();
		return fact;
	}
}
