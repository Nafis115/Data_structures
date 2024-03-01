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
        next = NULL;
    }
};

void insert_at_tail(Node *&head, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int show(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print(Node *head, int pos, int s)
{
    Node *temp = head;
    if (s % 2 == 0)
    {
        for (int i = 1; i <= pos-1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
        cout<<temp->next->val<<endl;
    }
    else
    {
        for (int i = 1; i <= pos; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << endl;
    }
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_at_tail(head, v);
    }

    int s = show(head);

    int r = s / 2;
    print(head, r, s);

    return 0;
}