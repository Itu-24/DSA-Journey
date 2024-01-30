
class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        
        Node*fast=head;
        Node*slow=head;
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast==NULL){
                return -1;
            }
            fast=fast->next;
            if(fast==slow){
                slow=head;
                while(fast!=slow){
                    slow=slow->next;
                    fast=fast->next;
                }
                return fast->data;
            }
        }
        return -1;
    }
};
