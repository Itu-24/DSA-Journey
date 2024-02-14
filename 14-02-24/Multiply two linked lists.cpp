// ques- https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long mod=1000000007;
   Node*temp=l1;
  long long num1=0;
  while(temp!=NULL){
      int d=temp->data;
      temp=temp->next;
      num1=(num1*10+d)%mod ;
      
  }
  
    long long num2=0;
    temp=l2;
  while(temp!=NULL){
      int d=temp->data;
      temp=temp->next;
      num2=(num2*10+d)%mod ;
      
  }
  
  long long ans=(num1*num2)%mod;
  return ans;
}
