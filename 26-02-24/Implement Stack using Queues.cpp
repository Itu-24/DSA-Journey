// ques = https://leetcode.com/problems/implement-stack-using-queues/description/?source=submission-ac

class MyStack {

        queue<int>q;
public:
    MyStack() {

        
    }
    
    void push(int x) {
      
            int size=q.size();
            q.push(x);
            while(size){
                int val=q.front();
                q.push(val);
                q.pop();
                size--;

            }
   
 
        
    }
    
    int pop() {
       if(q.size()){
           int val=q.front();
           q.pop();
           return val;
       }else{
           return -1;
       }
    }
    
    int top() {
        return q.front();
        
    }
    
    bool empty() {
        if(q.size()){
            return false;
        }else{
            return true;
        }
        
    }
};
