
// QUES- https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

class Solution
{
   void  insertattail(Node*&tail,int d){
        Node*temp=new Node(d);
        
        tail->next=temp;
        tail=temp;
    }
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        if(head==NULL){
            return head;
        }
        
        // Add code here
        Node *zerohead=new Node(0);
        Node *zerotail=zerohead;
        
        Node *onehead=new Node(1);
        Node*onetail=onehead;

        Node *twohead=new Node(2);
        Node*twotail=twohead;
        
        Node*temp=head;
        
        while(temp!=NULL){
            
            if(temp->data==0){
                insertattail(zerotail,0);
            } else if(temp->data==1){
                insertattail(onetail,1);
            }else if(temp->data==2){
                insertattail(twotail,2);
            }
            temp=temp->next;
        }
        if(onehead->next){
            
        
         zerotail->next=onehead->next;
         onetail->next=twohead->next;
        }else if(twohead->next){
              zerotail->next=twohead->next;
        }
        Node*anshead=zerohead->next;
        
        delete zerohead;
        delete onehead;
        delete twohead;
        
        return anshead;
        

        
    }
};
