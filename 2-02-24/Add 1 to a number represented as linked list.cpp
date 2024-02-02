QUESTION = https://www.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1
/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    Node* reverse(Node* head){
        Node*temp=head;
        Node*prev=NULL;
        while(temp!=NULL){
            Node*f=temp->next;
            temp->next=prev;
            prev=temp;
            temp=f;
        }
        return prev;
    }
    public:
    Node* addOne(Node *head) 
    {
        if(head==NULL){
            return head;
        }
       head=reverse(head);
       Node*temp=head;
       Node*prev=NULL;
      int carry=1;
    //   int carry=temp->data%10;
       while(temp!=NULL && carry== 1){
           temp->data=temp->data+carry;
           carry=temp->data/10;
           temp->data=temp->data%10;
           prev=temp;
           temp=temp->next;
           
       }
       if(carry==1){
           Node* extra=new Node(1);
           prev->next=extra;
           prev=prev->next;
       }
       
       head=reverse(head);
       return head;
    }
};
