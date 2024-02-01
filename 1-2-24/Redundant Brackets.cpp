#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char>stack;
 for(int i=0;i<s.size();i++){

     char a=s[i];

     if(a!=')'){
         stack.push(a);

     }else{
         int cnt=0;
         while(stack.top()!= '('){
              char b=stack.top();
              if((b=='*')||(b=='/')||(b=='+')||(b=='-')){
                  cnt++;
              }
              stack.pop();
         }
         stack.pop();
         if(cnt==0){
             return true;
         }


     }
 }
 return false;
}
