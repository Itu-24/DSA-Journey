QUESTION LINK= https://leetcode.com/problems/largest-rectangle-in-histogram/description/
// solved by using stack
#include<stack>
class Solution {

public:
    int largestRectangleArea(vector<int>& heights) {
      stack<int>st;
      st.push(-1);
      stack<int>index;
      index.push(heights.size());

      vector<int>end(heights.size());
        // will give the index of next smallest element to the right
      for(int i =heights.size()-1;i>=0;i--){

            while(st.top()>=heights[i]){
                st.pop();
                index.pop();
            }
            end[i]=index.top();
            st.push(heights[i]);
            index.push(i);
            
      }
      while(st.size()!=1){
          st.pop();
      }
      while(index.size()!=0){
          index.pop();
      }
      index.push(-1);
      vector<int>start(heights.size());
        // will give the index of next smallest element to the left
      for(int i=0;i<heights.size();i++){
          while(st.top()>=heights[i]){
              st.pop();
              index.pop();
          }
          start[i]=index.top();
          st.push(heights[i]);
          index.push(i);

      }
      // largest area 
      int ans=0;
      for(int i=0;i<heights.size();i++){
          int b=end[i]-start[i]-1;
          int l=heights[i];
          int area=l*b;
          ans=max(ans,area);
      }

      return ans;
    }
};

// BRUTE FORCE-------------------------------------------------------------------------
int largestRectangleArea(vector<int> &heights)
{
    int ans = -1;
    for (int i = 0; i < heights.size(); i++)
    {
        int s = i, e = i;
        int h = heights[i];
        while (s >= 0 && heights[s] >= h)
        {
            s--;
        }
        while (e <= heights.size() && heights[e] >= h)
        {
            e++;
        }
        s++;
        e--;
        int area = h * (e - s + 1);
        cout << area << " ";
        ans = max(area, ans);
    }
    return ans;
}
