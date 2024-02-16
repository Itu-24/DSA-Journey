// Ques=https://www.codingninjas.com/studio/problems/implement-stack-with-linked-list_630475?leftPanelTabValue=PROBLEM

class node{
   public:
   int data;
   node*next;
   node(int d){
       data=d;
       next=NULL;
   }
};
class Stack
{
    node*head;

public:
  Stack() {

  }

  int getSize() {
        if(isEmpty()){
            return 0;
        }else{
            int cnt=0;
            node*temp=head;
            while(temp!=NULL){
                temp=temp->next;
                cnt++;
            }
            return cnt;
        }
    }

    bool isEmpty()
    {
       if(head!=NULL){
           return false;
       }else{
           return true;
       }
    }

    void push(int data)
    {
       node*temp=new node(data);
       if(isEmpty()){
           head=temp;
       }else{
           temp->next=head;
           head=temp;
       }
    }

    void pop()
    {
        if(!isEmpty()){
            node*temp=head;
            head=head->next;

            delete temp;
        }
    }

    int getTop()
    {
        if(isEmpty()){
            return -1;
        }else{
           return head->data;
        }
    }
};
