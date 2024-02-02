#include<stack>

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
   vector<int>ans(n);
    stack<int>st;
    st.push(-1);
    
    for(int i=n-1;i>=0;i--){
        int num=arr[i];

         while(st.top()>=num){
             st.pop();
         }
         ans[i]=st.top();
         st.push(num);
    }

 
    return  ans;
  
}
