#include <iostream>
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

void insert_at_any_posi(Node *head, int v, int pos)
{
    Node *newnode = new Node(v);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    if (newnode->next != NULL)
    {
        newnode->next->prev = newnode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    cout << "L -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print1(Node *tail)
{
    Node *temp = tail;
    cout << "R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int size(Node *head)
{
    int cnt = 0;
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        cnt++;
    }
    return cnt;
}

void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
}

void tail_insert(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    if (size(head) == 0)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x;

        if (x > size(head))
        {
            cin >> v;
            cout << "Invalid" << endl;
        }
        else if (x == 0)
        {
            cin >> v;
            insert_head(head, tail, v);
            print(head);
            print1(tail);
        }
        else if (size(head) == x)
        {
            cin >> v;
            tail_insert(head, tail, v);
            print(head);
            print1(tail);
        }
        else
        {
            cin >> v;
            insert_at_any_posi(head, v, x);
            print(head);
            print1(tail);
        }
    }

    return 0;
}
