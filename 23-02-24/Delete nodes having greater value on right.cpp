// ques== https://www.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


Node *reverse(Node *head)
{

    if (head->next == NULL)
    {
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *store = curr->next;
        curr->next = prev;
        prev = curr;
        curr = store;
    }

    return prev;
}
class Solution
{
public:
    Node *compute(Node *head)
    {
        head = reverse(head);

        Node *temp = head;
        while (temp->next != NULL)
        {
            if (temp->next->data < temp->data)
            {
                Node *store = temp->next;
                temp->next = store->next;
                delete store;
            }
            else
            {
                temp = temp->next;
            }
        }
        head = reverse(head);
        return head;
    }
};
