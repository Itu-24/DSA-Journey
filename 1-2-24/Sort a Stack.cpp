#include <bits/stdc++.h> 
void putelementOver_X(stack<int> &stack,int top){
	if(stack.size()==0 || top >=stack.top()){
		stack.push(top);
		return;
	}

	int topvalue=stack.top();
	stack.pop();

	putelementOver_X(stack,top);
	stack.push(topvalue);

}
void sortStack(stack<int> &stack)
{
	// Write your code here
	// base case 
	if(stack.size()==1){
		return;
	}

     int top=stack.top();
	 stack.pop();

	 sortStack(stack);

	 putelementOver_X(stack,top);
}
