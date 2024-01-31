#include <iostream>
using namespace std;
class stackLinkList
{
    int data;
    int top;
    stackLinkList *next;

public:
    stackLinkList(int data)
    {
        this->data = data;
        this->next = NULL;
        this->top = -1;
    }

    void push(int d)
    {

        stackLinkList *curr = this;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }

        stackLinkList *temp = new stackLinkList(d);
        curr->next = temp;
        this->top++;
    }
    int pop()
    {
        if (top >= 0)
        {
            stackLinkList *curr = this->next;
            // i set prev=this not NULL cuz if there is one node present in the stack other than base node then top=0 nd then i have to access next of null which willl tgrow error
            stackLinkList *prev = this;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
            int ans = curr->data;
            delete curr;
            this->top--;
            return ans;
        }
        else
        {
            cout << "stack underflow" << endl;
            return -1;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            stackLinkList *curr = this;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            return curr->data;
        }
        else
        {
            cout << "stack is empty.... " << endl;
            return '\0';
        }
    }
    bool empty()
    {
        if (this->next == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int sizeofstack()
    {
        stackLinkList *curr = this;
        int cnt = 0;
        while (curr->next != NULL)
        {
            curr = curr->next;
            cnt++;
        }
        return cnt;
    }
};
int main()
{
    stackLinkList *head = new stackLinkList(-1);
    cout << head->peek() << endl;
    stackLinkList st(89);
    st.push(10);
    cout << " top = " << st.peek() << " empty = " << st.empty() << " size = " << st.sizeofstack() << endl;
    st.push(20);
    cout << " top = " << st.peek() << " empty = " << st.empty() << " size = " << st.sizeofstack() << endl;
    st.push(30);
    cout << " top = " << st.peek() << " empty = " << st.empty() << " size = " << st.sizeofstack() << endl;
    st.push(40);
    st.pop();
    cout << " top = " << st.peek() << " empty = " << st.empty() << " size = " << st.sizeofstack() << endl;
    st.pop();
    cout << " top = " << st.peek() << " empty = " << st.empty() << " size = " << st.sizeofstack() << endl;
    st.pop();
    cout << " top = " << st.peek() << " empty = " << st.empty() << " size = " << st.sizeofstack() << endl;
    st.pop();
    cout << " top = " << st.peek() << " empty = " << st.empty() << " size = " << st.sizeofstack() << endl;
    st.pop();
    cout << " top = " << st.peek() << " empty = " << st.empty() << " size = " << st.sizeofstack() << endl;
    st.pop();

}
