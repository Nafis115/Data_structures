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
int size(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
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
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
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
void print1(Node *tail)
{

    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void insert_at_any_posi(Node *&head, Node *&tail, int posi, int v)
{
    Node *newnode = new Node(v);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < posi - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cout << "Enter your quriees: " << endl;
    cin >> q;
    int pos;
    int val;

    while (q--)
    {
        cout << "Enter your posi" << endl;
        cin >> pos;
        if (pos > size(head))

        {
            cout << "Enter your value: " << endl;
            cin >> val;
            cout << "invalid" << endl;
        }
        else
        {
            if (pos == 0)
            {
                cout << "Enter your value: " << endl;
                cin >> val;
                insert_head(head, tail, val);
                print(head);
                print1(tail);
            }
            else if (pos == size(head))
            {
                cout << "Enter your value: " << endl;
                cin >> val;
                insert_list(head, tail, val);
                print(head);
                print1(tail);
            }

            else
            {
                cout << "Enter your value: " << endl;
                cin >> val;
                insert_at_any_posi(head, tail, pos, val);
                print(head);
                print1(tail);
            }
        }
    }

    return 0;
}