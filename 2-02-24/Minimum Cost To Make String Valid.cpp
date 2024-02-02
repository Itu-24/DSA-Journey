#include <bits /stdc++.h>
int findMinimumCost(string str)
{
    // Write your code here
    stack<int> stack;
    // traverse the string
    for (int i = 0; i < str.size(); i++)
    {
        char c = str[i];
        if (c == '}' && !stack.empty() && stack.top() == '{')
        {
            stack.pop();
        }
        else
        {
            stack.push(c);
        }
    }
    int ans = 0;
    if (stack.size() % 2 == 0)
    {
        while (stack.size() > 0)
        {
            char t1 = stack.top();
            stack.pop();
            char t2 = stack.top();
            stack.pop();
            if (t1 == t2)
            {
                ans = ans + 1;
            }
            else
            {
                ans = ans + 2;
            }
        }
        return ans;
    }
    else
    {
        return -1;
    }
}
