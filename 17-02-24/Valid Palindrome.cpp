// Ques = https://leetcode.com/problems/valid-palindrome/
class Solution {

    bool validchar(char ch){
        if(('0'<=ch && ch<='9')|| ('a'<=ch && ch<='z')|| ('A'<=ch && ch<='Z')){
            return true;
        }
        return false;
    }
    string makevalidstr(string s){
        string str;
        for(int i=0;i<s.size();i++){
            if(validchar(s[i])){
                str.push_back(s[i]);
            }
           
        }
        return str;
    }
public:
    bool isPalindrome(string s) {
        s=makevalidstr(s);

        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if('A'<=ch && ch<='Z'){
                char a=ch- ('A'-'a');
                s[i]=a;
            }
        }

        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }start++,end--;
        }
        return true;
        
    }
};
