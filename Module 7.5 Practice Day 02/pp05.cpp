#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void input_link_list(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    cout << "Frist link list: " << endl;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }

        input_link_list(head, tail, v);
    }
    int max = 0;
    cout << "The maximum value in link list" << endl;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j =i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    print(head);

    return 0;
}
