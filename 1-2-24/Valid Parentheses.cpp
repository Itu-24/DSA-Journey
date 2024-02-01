#include<stack>
bool isValidParenthesis(string s)
{
    // Write your code here.
    // first we will create a stack 
    stack<char>st;

    for(int i=0;i<s.size();i++){
        char b=s[i];
        if(st.size()== 0){
            st.push(b);
        }else if((st.top()=='[' && b==']') || (st.top()=='{' && b=='}')|| (st.top()=='(' && b==')')){
            st.pop();
        }else{
            st.push(s[i]);
        }
        
    }
    if(st.size()>0){
        return false;
    }else{
        return true;
    }
}
