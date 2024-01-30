#include <iostream>

// #include <stack>
using namespace std;
#include <vector>
// Lecture approach
class Stack
{
    //    ptoperties
    int *arr;
    int size;
    int top = -1;

public:
    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int d)
    {
        if (top < size - 1)
        {
            top++;
            arr[top] = d;
        }
        else
        {
            cout << "Stack Over flow..." << endl;
            return;
        }
    }
    void pop()
    {
        if (top > -1)
        {
            arr[top] = '\0';
            top--;
        }
        else
        {
            cout << "Stack Underflow.." << endl;
            return;
        }
    }

    int peek()
    {
        if (top > -1)
        {
            return arr[top];
        }
        else
        {
            cout << "stack is empty.." << endl;
            return '\0';
        }
    }

    bool empty()
    {
        if (top >= 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int sizeofstack()
    {
        return top + 1;
    }
};
/* MY approach
class mystack
{
    int arr[10];

    int e = 0;

public:
    void push(int d)
    {
        if (e < 10)
        {

            arr[e] = d;
            e++;
        }
        else
        {
            cout<<"hi";
            return;
        }
    }
    void pop()
    {
        if (e > 0)
        {
            arr[e] = '\0';
            cout << "hi " << arr[e] << " " << e << endl;
            e--;
        }
        else
        {
            return;
        }
    }
    int size()
    {
        return e;
    }
    int top()
    {

        return arr[e - 1];
    }
    bool empty()
    {
        if (e == 0)
        {
            return 1;
        }
        else
        {
            return false;
        }
    }
}; */
// int main()
// {
/*
// creation of stack
stack<int> s;

//   push data
s.push(1);
s.push(2);
s.push(3);

cout << s.empty() << endl;
cout << s.size() << " " << s.top() << " " << s.empty() << endl;
// pop data
s.pop();
cout << s.size() << " " << s.top() << " " << s.empty() << endl;

s.pop();
cout << s.size() << " " << s.top() << " " << s.empty() << endl;

s.pop();
cout << s.size() << " " << s.empty() << endl;

stack<int> s1;
stack<int> s2;
s2.push(10);
s2.push(20);
s2.push(30);
s2.push(40);

s1.push(1);
s1.push(2);
s1.push(3);
cout << "Size and top of s1 = " << s1.size() << " " << s1.top() << endl
     << "Size and top of s2 =  " << s2.size() << " " << s2.top() << " " << endl;

s1.swap(s2);
cout << "Size and top of s1 = " << s1.size() << " " << s1.top() << endl
     << "Size and top of s2 =  " << s2.size() << " " << s2.top() << " " << endl;

s1.emplace(999);
cout << s1.top() << endl;

*/
//    STACK IMPLEMENTATION

// mystack a;
// a.push(10);
// a.push(20);
// a.push(30);
// a.push(40);
// a.push(50);
// a.push(60);
// a.push(70);
// a.push(80);
// a.pop();
// a.pop();
// cout << "empty = " << a.empty() << " top = " << a.top() << " size =  " << a.size() << endl;
// a.push(10);
// a.push(20);
// a.push(30);
// a.push(40);
// a.push(50);
// a.push(90);
// a.push(90);
// a.push(90);
// cout << "empty = " << a.empty() << " top = " << a.top() << " size =  " << a.size() << endl;
// }

// int main()
// {
//     Stack a(5);
//     cout << a.empty() << " " << a.peek()<< " " << a.sizeofstack() << endl;
//     a.push(10);
//     a.push(20);
//     a.push(30);
//     // cout << a.empty() << " " << a.peek() << endl;
//     cout << a.empty() << " " << a.peek()<< " " << a.sizeofstack() << endl;
//     a.push(40);
//     a.push(50);
//     a.push(60);
//     cout << a.empty() << " " << a.peek()<< " " << a.sizeofstack() << endl;
//     a.pop();
//     cout << a.empty() << " " << a.peek()<< " " << a.sizeofstack() << endl;

//     a.pop();
//     a.pop();
//     a.pop();
//     a.pop();
//     a.pop();
//     cout << a.empty() << " " << a.peek()<< " " << a.sizeofstack() << endl;

// }
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
        arr = new int(s);
    }

    // Push in stack 1.
    void push1(int num)
    {
        // Write your code here.
        if (s1 < s2 - 1)
        {
            s1++;
            arr[s1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        // Write your code here.
        if (s2 > s1 + 1)
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
int main()
{
    TwoStack s(15);
    s.push2(10);
    s.push2(10);
    s.push2(10);
    s.push2(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push2(10);
    s.push2(10);
    s.push2(12);
    s.push2(12);
    s.push2(12);
    s.push2(12);
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop2();
    s.pop2();
    s.pop2();
    cout << "hi";
}