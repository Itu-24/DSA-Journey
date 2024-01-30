

class Solution
{
    
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        // base case 
        if(head==NULL){
            return head;
        }
        node*curr=head;
        node*prev=NULL;
        int cnt=k;;
        node*forward;
        while(cnt>0 && curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            
            cnt--;
        }
        
        head->next=reverseIt(forward,k);
        return prev;
        
        
    }
};

