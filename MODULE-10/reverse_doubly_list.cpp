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
void insert_list1(Node *&head1, Node *&tail1, int v1)
{
    Node *newnode = new Node(v1);
    if (head1 == NULL)
    {
        head1 = newnode;
        tail1 = newnode;
        return;
    }
    tail1->next = newnode;
    newnode->prev = head1;
    tail1 = newnode;
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

    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *temp = head;
    while (temp != NULL)
    {
        insert_list1(head1, tail1, temp->val);
        temp = temp->next;
    }
    print(head1);

    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);

    print(head);
    return 0;
}