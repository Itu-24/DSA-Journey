// Ques- https://www.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     if(head==NULL || head->next==NULL){
         return head;
     }else{
         map<int,bool>visited;
         Node*curr=head;
         visited[head->data]=true;
         while(curr->next!=NULL){
             if(visited[curr->next->data]){
                 curr->next=curr->next->next;
             }else{
                 visited[curr->next->data]=true;
                 curr=curr->next;
             }
         }
         return head;
     }
    }
};
