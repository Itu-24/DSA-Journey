QUESTION LINK= https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

class Solution
{    public:
     int left(int arr[], int n , int x ){
        int s=0,e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==x){
                ans=mid;
                s=mid+1;
            }else if(arr[mid]>x){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }
    
    int right(int arr[], int n , int x ){
        int s=0,e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]==x){
                ans=mid;
                e=mid-1;
            }else if(arr[mid]>x){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;
    }

    vector<int> find(int arr[], int n , int x )
    {
        // code here

        
        int s=right(arr,n,x);
        int e=left(arr,n,x);
        vector<int>ans;
        ans.push_back(s);
        ans.push_back(e);
        return ans;
        
    }
};
