#include <bits/stdc++.h> 
void solve(stack<int>& myStack, int x){
    if(myStack.size()==0){
        myStack.push(x);
        return;
    }
    int topvalue=myStack.top();
    myStack.pop();

    solve(myStack,x);

    myStack.push(topvalue);
    return;
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}
