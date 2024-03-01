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
void insert_list(Node *&head, Node *&tail, int v)
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
void reverse(Node *&head, Node *curr)
{
    if (curr->next == NULL)
    {
        head = curr;
        return;
    }
    reverse(head, curr->next);
    curr->next->next = curr;
    curr->next = NULL;
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
        insert_list(head, tail, v);
    }
    print(head);

    reverse(head, head);
    print(head);

    return 0;
}