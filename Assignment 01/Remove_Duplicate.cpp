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
void insert_tail(Node *&head, Node *&tail, int v)
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
    while (true)
    {

        int v;

        cin >> v;
        if (v == -1)
        {
            break;
        }

        insert_tail(head, tail, v);
    }

    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i; j->next != NULL;)
        {

            if (i->val == j->next->val)
            {
                Node *temp = j->next;
                j->next = temp->next;
                delete temp;
            }
            else
            {
                j = j->next;
            }
        }
        }

    print(head);
    return 0;
}