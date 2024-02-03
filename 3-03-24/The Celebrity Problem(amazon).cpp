
// By using stack 
// TIME COMPLEXITY= O(1) 

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // put all the person in the stack
       stack<int>member;
       for(int i=0;i<n;i++){
           member.push(i);
       }
       
    //   find the potencial member can can be celebrity by comparing nd discarding top 2 member or stack
       while(member.size()>1){
           int a=member.top();
           member.pop();
         
           int b=member.top();
           member.pop();
          
        //   a knows b so a can't be celebrity
           if(M[a][b]==1 ){
               member.push(b);
           }else if(M[b][a]==1){
            //   b  knows a so b can't be celebrity
               member.push(a);
           }
        //   both of them not know each other so the can't be a celebrity

       }
       
       if(member.empty()){
           return -1;
       }
       
      //   now cheack the remaining person in the stack that he is the required person or not 
      int person=member.top();
    // checking person know anyone or not 
      for(int i=0;i<n;i++){
          if(M[person][i]==1){
              return -1;
          }
      }
      // checking everyone know the person  or not 
      for(int i=0;i<n;i++){
          if(i==person){
              continue;
          }
          if(M[i][person]==0){
              return -1;
          }
      }
      return person;
      
      
    }
};


// BRUTE FORCE T
// TIME COMPLEXITY =O(N^2)

//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
       for(int j=0;j<n;j++){
           
       
             int i=0;
             while((i==j)||(  i<n && M[i][j]==1)){
                 i++;
             }
     
             if(i==n){
                 i=0;
                 
                 while(M[j][i]==0 && i<n){
                      i++;    
                 }
                 if(i==n){
                     return j;
                 }
             }
           
       }
        
        return -1;
    }
};
