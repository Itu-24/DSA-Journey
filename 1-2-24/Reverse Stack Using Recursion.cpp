
void insertatbottom(stack<int> &stack,int x){
    // base case 
    if(stack.size()==0){
        stack.push(x);
        return;
    }

    int element=stack.top();
    stack.pop();

    insertatbottom(stack,x);

    stack.push(element);
    return;
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    //  base case 
    if(stack.size()==0){
        return;

    }
    // store the top value
    int topvalue=stack.top();
    stack.pop();
    
    // passed the smaller stack with size n-1;
    reverseStack(stack);
    
    insertatbottom(stack,topvalue);

    


}
