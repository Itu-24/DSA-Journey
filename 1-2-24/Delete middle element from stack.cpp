#include <bits/stdc++.h>
void solve(stack<int>&inputStack, int N,int cnt){
      if(cnt==N/2){
         inputStack.pop();
         return;
      }

      int value=inputStack.top();
      inputStack.pop();

      solve(inputStack,N,cnt+1);

    
      inputStack.push(value);
      return;

} 
void deleteMiddle(stack<int>&inputStack, int N){
	
        int cnt=0;
        solve(inputStack,N,cnt);
   } 
   

   
