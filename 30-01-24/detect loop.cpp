
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node*fast=head;
        Node*slow=head;
        
        while(fast!=NULL){
            
            fast=fast->next;
            if(fast==NULL){
                
                return false;
            }
            fast=fast->next;
            slow=slow->next;
            if(fast==slow){
                // cout<<fast->next->data<<" "<<slow->next->data;
              return true;
            }
        }
        return false;
    }
};
