// Ques= https://www.geeksforgeeks.org/problems/max-rectangle/1 
class Solution{
    
    int largestrectarea(int arr[],int n){
        vector<int>right(n);

        stack<int>index;
        index.push(n);
        
        
        for(int i=n-1;i>=0;i--){
            int num=arr[i];
            
            while(index.top()!=n && num<=arr[index.top()]){
                index.pop();
                
            }
            right[i]=index.top();
            index.push(i);
        }
        
        while(!index.empty()){
            index.pop();
        }
        
        index.push(-1);
        vector<int>left(n);
        for(int i=0;i<n;i++){
            int num=arr[i];
            
            while(index.top()!=-1 && num<= arr[index.top()]){
                index.pop();
            }
            left[i]=index.top();
            index.push(i);
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            int l=arr[i];
            int b= right[i]-left[i]-1;
            
            int area=l*b;
            ans=max(ans,area);
        }
        
        return ans;
        
    }
    
   
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        
        //   compute area for first row
            int ans=largestrectarea(M[0],m);
            for(int i=1;i<n;i++){
               
               for(int j=0;j<m;j++){
                //   row updated by adding previous row 
                  if(M[i][j]!=0){
                      
                      M[i][j]=M[i][j]+M[i-1][j];   
                  }
              }
            //   new area calcuted for updated row 
              int newarea=largestrectarea(M[i],m);
              ans=max(ans,newarea);
             
            
            }
        return ans;
    }
};
