// ques -https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&sortBy=submissions

    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
         long long sum=0;
           long long ans=arr[0];
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            ans=max(ans,sum);
            if(sum<0){
                sum=0;
            }
        }
        return ans;
        
    }
