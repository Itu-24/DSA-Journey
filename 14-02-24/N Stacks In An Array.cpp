// QUES - https://www.codingninjas.com/studio/problems/n-stacks-in-an-array_1164271?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio11thfeb&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio11thfeb&leftPanelTabValue=SUBMISSION


#include <bits/stdc++.h>
class NStack {
  int *arr;
  int *top;
//   store the next free space 
  int *next;
  
//   store the index of the last element of the stack 
  int *last;
  int freespace;
  int n, s;

public:
  // Initialize your data structure.
  NStack(int N, int S) {
    n = N;
    s = S;
    arr = new int[S];
    top = new int[N];
    next = new int[S];
    last = new int[S];
    for (int i = 0; i < N; i++) {
      top[i] = -1;
    }
    for (int i = 0; i < S; i++) {
      next[i] = i + 1;
      last[i] = -1;
    }
    next[S - 1] = -1;

    freespace = 0;
  }

  // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the
  // stack, and false otherwise.
  bool push(int x, int m) {
    // check overflow
    if (freespace != -1) {

      // find index
      int index = freespace;

      // update freespace
      freespace = next[index];

      // put element
      arr[index] = x;

      // update last
      last[index] = top[m - 1];

      // update top
      top[m - 1] = index;

      return true;

    } else {
        
      return false;
    }
  }

  // Pops top element from Mth Stack. Returns -1 if the stack is empty,
  // otherwise returns the popped element.
  int pop(int m) {
  
    if (top[m - 1] == -1) {
      return -1;
    }

    // find index
    int index = top[m - 1];

    // update top
    top[m - 1] = last[index];

    // pop element
    int element = arr[index];
    arr[index] = '\0';

    //    update next
    next[index] = freespace;

    //    update freespace
    freespace = index;

    return element;
  }
};

// lecture approach 
#include <bits/stdc++.h> 
class NStack
{
    int *arr;
    int *top;
    int *next;
    int freespace;
    int n,s;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n=N;
        s=S;
        arr=new int[S];
        top=new int[N];
        next=new int[S];

        for(int i=0;i<N;i++){
            top[i]=-1;
        }
        for(int i=0;i<S;i++){
            next[i]=i+1;
        }next[S-1]=-1;
      
        freespace=0;

    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // check overflow 
        if (freespace != -1) {
        
             // find index 
             int index=freespace;

             // update freespace 
             freespace=next[index];
        
             // put element 
             arr[index]=x;

             // update next 
             next[index]=top[m-1];

             // update top
             top[m-1]=index; 

             return true;

        }else {
            return false;
        }

    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        if(top[m-1]==-1){
            return -1;
        }

        // find index 
        int index=top[m-1];

        // update top 
        top[m-1]=next[index];

        // pop element 
        int element=arr[index];
        arr[index]='\0';
  
    //    update next 
       next[index]=freespace;

    //    update freespace 
        freespace=index;

         return element;


    }
};
