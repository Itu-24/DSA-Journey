Ques=https://www.codingninjas.com/studio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?topList=love-babbar-dsa-sheet-problems%3Fsource%3Dyoutube&campaign=Codestudio_Lovebabbar&utm_source=youtube&utm_medium=affiliate&utm_campaign=Codestudio_Lovebabbar&leftPanelTabValue=PROBLEM

#include <functional>
class SpecialStack
{
private:
    int *arr;
    int topindex;
    int minindex;
    int *prev;
    int size;

public:
    SpecialStack(int s = 1000)
    {
        arr = new int[s];
        prev = new int[s];
        topindex = -1;
        size = s;
        minindex = 0;
    }
    void push(int data)
    {
        // Implement the push() function.
        if (topindex < size)
        {
            topindex++;
            arr[topindex] = data;
            if (arr[minindex] >= arr[topindex])
            {
                minindex = topindex;
            }
            prev[topindex] = minindex;
        }
    }

    void pop()
    {
        // Implement the pop() function.
        if (topindex > -1)
        {
            if (arr[minindex] == arr[topindex])
            {
                minindex = prev[topindex - 1];
            }

            topindex--;
        }
    }

    int top()
    {
        // Implement the top() function.
        if (topindex > -1)
        {

            return arr[topindex];
        }
    }

    int getMin()
    {
        // Implement the getMin() function.
        return arr[minindex];
    }
};
