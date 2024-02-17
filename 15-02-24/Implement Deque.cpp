// ques =https://www.codingninjas.com/studio/problems/deque_1170059?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;
public:
    // Initialize your data structure.
  Deque(int n) {
      size=n;
      arr=new int[n];
      front=-1;
      rear=-1;
  }

  // Pushes 'X' in the front of the deque. Returns true if it gets pushed into
  // the deque, and false otherwise.
  bool pushFront(int x) {
   
        if(isFull()){
            return false;
        }else{
            if(front==-1){
                front=0;
                rear=0;
            }else if(front==0){
                 front=size-1;
                 
            }else{
                front--;
            }

            arr[front]=x;


            return true;
        }
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if(isFull()){
            return false;
        }else{
            if(rear==-1){
                front=0;
                rear=0;
            }else if (rear==size-1){
                    rear=0;
            }else{
                rear++;
            }
            arr[rear]=x;


            return true;
        }
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()){
            return -1;
        }else{
            int ans=arr[front];
            if(front==rear ){
                  front=-1;
                  rear=-1;
             
            }else if( front==size-1){
                     front=0;
            }
            else{
                front++;
            }

            return ans;
        }
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(isEmpty()){
            return -1;
        }else{
            int ans=arr[rear];

            if(rear==front){
                 front=-1;
                  rear=-1;
            }else if(rear==0){
                rear=size-1;
            }else{
                rear--;
            }

            return ans;
        }
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
       if(isEmpty()){
           return -1;
       }else{
           return arr[front];
       }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        // Write your code here.
         if(isEmpty()){
           return -1;
       }else{
           return arr[rear];
       }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front==rear && front==-1){
            return true;
        }else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if((front==0 && rear==size-1) || (rear==front-1)){
            return true;
        }else{
            return false;
        }
    }
};


//                                                   MY APPROACH 
#include <bits/stdc++.h> 
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x) {
        if(isFull()){
            return false;
        }else{
            if(isEmpty()){
                front=0;
                rear=0;
            }
            if(front==0){
                front=size-1;
            }else{
                front--;
            }

            arr[front]=x;
            
            return true;
        }

    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if(isFull()){
            return false;
        }else{
            if(isEmpty()){
                rear=0;
                front=0;
            }
            arr[rear]=x;

            if(rear==size-1){
                rear=0;
            }else{
                rear++;
            }
            return true;

        }
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()){
            return -1;
        }else{
            int store=arr[front];
            if(front==size-1){
                front=0;
            }else{
                front++;
            }
            if(front==rear){
                front=-1;
                rear=-1;
            }
            return store;
        }
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
      if(isEmpty()){
          return -1;
      }else{
          if(rear==0){
              rear=size-1;
          }else{
              rear--;
          }

          int store=arr[rear];
          if(front==rear){
              front=-1;
              rear=-1;
          }
          return store;
      }
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }else{

            return arr[front];
        }
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty()){
           return -1;
        }else{
           int x=rear;

           if(x==0){
               x=size-1;
           }else{
               x--;
           }

           return arr[x];
       }
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front==rear && front==-1){
            return true;
        }else{
            return false;
        }
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
      if(front==rear && front !=-1){
          return true;
      }else{
         return false;
      }
    }
};
