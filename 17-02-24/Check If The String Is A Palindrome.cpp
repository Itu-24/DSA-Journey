// QUES =https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5&leftPanelTabValue=PROBLEM


// TIME COMPLEXITY - O(N) ; SPACE COMPLEXITY=O(1)
#include <bits/stdc++.h>
bool validchar(char a) {
  if ('0' <= a && a <= '9') {
    return true;

  } else if ('a' <= a && a <= 'z') {
    return true;

  } else if ('A' <= a && a <= 'Z') {

    return true;
  } else {
    return false;
  }
}
void tolowcasechar(string &s) {
  for (int i = 0; i < s.size(); i++) {

    if (validchar(s[i])) {

      s[i] = (char)tolower(s[i]);
    }
  }
}

bool checkPalindrome(string s) {

  tolowcasechar(s);

  int start = 0, end = s.size() - 1;
  while (start <= end) {
    char ch1 = s[start];
    char ch2 = s[end];

    if (validchar(ch1) == 0) {
      start++;
    } else if (validchar(ch2) == 0) {
      end--;
    } else if (ch1 != ch2) {
      return false;
    } else {
      start++;
      end--;
    }
  }
  return true;
}

//                                                                             2nd approach 

// TIME COMPLEXITY - O(N) ; SPACE COMPLEXITY=O(n)

#include <bits/stdc++.h> 
bool ispalindrome(string str){
    int s=0,e=str.size()-1;

    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }
        s++,e--;
    }
    return true;
}
bool checkPalindrome(string s)
{
    string str;
   
   for(int i=0;i<s.size();i++){
       char a=s[i];

       if('0'<=a && a<='9'){
           str.push_back(a);

       }else if('a'<=a&& a<='z'){
             str.push_back(a);

       }else if('A'<=a&& a<='Z'){
           char x=(char)tolower(a);
           str.push_back(x);

       }
   }

   return ispalindrome(str);
}
