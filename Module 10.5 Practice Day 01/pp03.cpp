#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_list(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->prev = tail;
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

void paline(Node *head, Node *tail)
{
    int cnt = 1;
    Node *temp = head;
    Node *temp1 = tail;
    while (temp != NULL)
    {
        if (temp->val != temp1->val)
        {
            cnt = 0;
        }
        temp = temp->next;
        temp1 = temp1->prev;
    }
    if (cnt == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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
        insert_list(head, tail, v);
    }
    paline(head, tail);
}