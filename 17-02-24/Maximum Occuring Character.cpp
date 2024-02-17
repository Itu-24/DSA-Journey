// Ques = https://www.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int arr[26]={0};
        for(int i=0;i<str.size();i++){
            char ch=str[i];
            
            int a=ch-'a';
            arr[a]++;
             
        }
        
        int maxi=-1;
        int ans=-1;
        for(int i=0;i<26;i++){
            if(arr[i]>maxi){
                maxi=max(maxi,arr[i]);
                ans=i;
            }
        }
        return 'a'+ans;
    }

};
