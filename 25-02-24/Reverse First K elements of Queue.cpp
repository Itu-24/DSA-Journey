// QUESS== https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

#include<stack>
class Solution
{

    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
   
   
      int size=q.size();
      stack<int>st;
       for(int i=0;i<k && q.size()>0;i++){
           int element=q.front();
           st.push(element);
           q.pop();
       }
       
       while(st.size()){
           int element=st.top();
           q.push(element);
           st.pop();
       }
       
       for(int i=k;i<size;i++){
           int element=q.front();
           q.pop();
           q.push(element);
       }
   
        return q;
    }
};
