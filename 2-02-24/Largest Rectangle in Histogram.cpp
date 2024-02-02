QUESTION LINK= https://leetcode.com/problems/largest-rectangle-in-histogram/description/


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
