Ques=https://www.codingninjas.com/studio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?topList=love-babbar-dsa-sheet-problems%3Fsource%3Dyoutube&campaign=Codestudio_Lovebabbar&utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Lovebabbar&leftPanelTabValue=PROBLEM
// optimize 
#include<stack>
class SpecialStack {
    stack<int>mystack;
    int mini;
    public:
        
    void push(int data) {
        // Implement the push() function.
        if(mystack.empty()){
             mystack.push(data);
             mini=data;
        }
        else if(data<mini){
             int val=2*data -mini;

             mystack.push(val);

             mini=data;

        }else{
            mystack.push(data);
        }
    }

    void pop() {
        
        if(mystack.empty()){
            return;
        }
        int data=mystack.top();
        if(data<mini){
            int value=2*mini- data;
            
             mini=value;

             mystack.pop();
            
        }else{
            mystack.pop();

        }
    }

    int top() {
        if(mystack.empty()){
            return -1;
        }

        int data=mystack.top();
        if(data<mini){
           
           return mini;
         
        }else{
            return  data;
        }
    }

    int getMin() {
        // Implement the getMin() function.
        if(mystack.empty()){
            return -1;
        }
        return mini;
    }  
};

    // my appproach 
// #include <functional>
// class SpecialStack
// {
// private:
//     int *arr;
//     int topindex;
//     int minindex;
//     int *prev;
//     int size;

// public:
//     SpecialStack(int s = 1000)
//     {
//         arr = new int[s];
//         prev = new int[s];
//         topindex = -1;
//         size = s;
//         minindex = 0;
//     }
//     void push(int data)
//     {
//         // Implement the push() function.
//         if (topindex < size)
//         {
//             topindex++;
//             arr[topindex] = data;
//             if (arr[minindex] >= arr[topindex])
//             {
//                 minindex = topindex;
//             }
//             prev[topindex] = minindex;
//         }
//     }

//     void pop()
//     {
//         // Implement the pop() function.
//         if (topindex > -1)
//         {
//             if (arr[minindex] == arr[topindex])
//             {
//                 minindex = prev[topindex - 1];
//             }

//             topindex--;
//         }
//     }

//     int top()
//     {
//         // Implement the top() function.
//         if (topindex > -1)
//         {

//             return arr[topindex];
//         }
//     }

//     int getMin()
//     {
//         // Implement the getMin() function.
//         return arr[minindex];
//     }
// };
