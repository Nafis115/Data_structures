#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    long long int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_link_list(Node *&head, Node *&tail, int v)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
       long long int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_link_list(head, tail, v);
    }
    int max = head->val;
    int min = tail->val;

    for (Node *j = head; j != NULL; j = j->next)
    {

        // max
        if (j->val >= max)
        {
            max = j->val;
        }
       
    }
    for (Node *j = head; j != NULL; j = j->next)
    {

        // max
        if (j->val<=min)
        {
            min = j->val;
        }
       
    }

    int re = max - min;
    cout << re << endl;

    return 0;
}