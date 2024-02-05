// QUESTION= https://www.geeksforgeeks.org/problems/sorted-insert-for-circular-linked-list/1

class Solution
{
public:
    Node *sortedInsert(Node *head, int data)
    {

        Node *mynode = new Node(data);
        if (head == NULL)
        {
            mynode->next = mynode;
            return mynode;
        }

        if (data <= head->data)
        {
            Node *temp = head->next;
            while (temp->next != head)
            {
                temp = temp->next;
            }

            temp->next = mynode;
            mynode->next = head;
            return mynode;
        }
        else
        {
            Node *temp = head;
            while (temp->next->data < data && temp->next != head)
            {
                temp = temp->next;
            }

            Node *store = temp->next;
            temp->next = mynode;
            mynode->next = store;
            return head;
        }
    }
};
