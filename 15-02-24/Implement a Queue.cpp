// Ques=https://www.codingninjas.com/studio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0%3Fsource%3Dyoutube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio&leftPanelTabValue=SUBMISSION

//                                                                                   using array 


#include <bits/stdc++.h>
class Queue {
  int *arr;
  int qfront;
  int rare;
  int size;

public:
  Queue(int s = 5000) {
    arr = new int[s];
    size = s;
    rare = 0;
    qfront = 0;
  }

  /*----------------- Public Functions of Queue -----------------*/

  bool isEmpty() {
    if (rare == qfront) {
      return true;
    } else {
      return false;
    }
  }

  void enqueue(int data) {

    if (rare < size) {
      arr[rare] = data;
      rare++;
    }
  }

  int dequeue() {
    if (!isEmpty()) {
      int store = arr[qfront];
      arr[qfront] = -1;
      qfront++;

      if (qfront == rare) {
        qfront = 0;
        rare = 0;
      }
      return store;
    } else {
      return -1;
    }
  }

  int front() {
    if (isEmpty()) {
      return -1;
    } else {
      return arr[qfront];
    }
  }
};


  //                                                                                         using linked list 
#include <bits/stdc++.h> 
class node{
   public:
   int d;
   node*next;
     node(int data){
       this->d=data;
       this->next=NULL;
     }

};
class Queue {
    node*head;
    node*tail;
public:
    Queue() {
        // Implement the Constructor
        this->head=NULL;
        this->tail=NULL;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(head){
            return false;
        }else{
            return  true;
        }
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        node*temp=new node(data);

        if(isEmpty()){
            head=temp;
            tail=temp;
        }else{
            this->tail->next=temp;
            this->tail=temp;

        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty()){
            return -1;
        }else{
            int store=head->d;

            node*temp=head;
            head=head->next;
            delete temp;

            return store;
        }
    }

    int front() {
        // Implement the front() function
        if(isEmpty()){
            return -1;
        }else{
            return head->d;
        }

    }
};
