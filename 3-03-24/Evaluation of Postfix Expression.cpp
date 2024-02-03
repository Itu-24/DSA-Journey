QUESTION = https://www.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>stack;
        for(int i=0;i<S.size();i++){
            char ch=S[i];
            
            if((ch=='+')||(ch=='-')||(ch=='*')||(ch=='/')){
                int b=stack.top();
                stack.pop();
                int a=stack.top();
                stack.pop();
                
                 if(ch=='+')
                   stack.push(a+b);
                
                 else if(ch=='-')
                  stack.push(a-b);
                
                 else if(ch=='*')
                   stack.push(a*b);
             
                 else 
                  stack.push(a/b);
                
            }else{
                int a=ch-'0';
                stack.push(a);
                
            }
        }
        
        return stack.top();
    }
};
