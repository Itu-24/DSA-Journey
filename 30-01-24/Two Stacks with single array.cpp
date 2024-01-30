#include <bits/stdc++.h>
class TwoStack
{
    int *arr;
    int size;
    int s1;
    int s2;

public:
    // Initialize TwoStack.
    TwoStack(int s)
    {
        // Write your code here.
        this->size = s;
        s1 = -1;
        s2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num)
    {
        // Write your code here.
        if (s2-s1>1)
        {
            s1++;
            arr[s1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        // Write your code here.
        if (s2-s1>1)
        {
            s2--;
            arr[s2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        // Write your code here.
        if (s1 >= 0)
        {
            int store = arr[s1];

            s1--;
            return store;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        // Write your code here.
        if (s2 < size)
        {
            int store = arr[s2];

            s2++;
            return store;
        }
        else
        {
            return -1;
        }
    }
};
