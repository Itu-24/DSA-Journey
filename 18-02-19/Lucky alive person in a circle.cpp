
// QUES==https://www.geeksforgeeks.org/problems/lucky-alive-person-in-a-circle1229/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution{
    int solve(int n,int k){
        // base case
        if(n==1){
            return 0;
        }
        
        int ans=(solve(n-1,k)+k)%n;
        return ans;
    }
    

public:
    int find(int N){
        // code here
        
        int index=solve(N,2);
        
        int lastnum=index+1;
        
        return lastnum;
    }
};
