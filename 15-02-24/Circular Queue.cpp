// ques =https://www.codingninjas.com/studio/problems/circular-queue_1170058?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int rear;
    int front;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        arr=new int[n];
        size=n;
        rear=-1;
        front=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
         if(full()){
             return false;
         }else{
             if(empty()){
                 rear=0;
                 front=0;
             }
             arr[rear]=value;
             if(rear==size-1){
                 rear=0;
             }else{
                 rear++;
             }

             return true;


         }
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
       if(empty()){
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
    bool empty(){
        if(rear== front && front==-1){
            return true;
        }else{
            return false;
        }
    }

    bool full(){
        if(rear==front && front !=-1){
              return true;
        }else{
            return false;
        }
    }
};
