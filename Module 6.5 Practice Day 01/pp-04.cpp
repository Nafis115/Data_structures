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

void insert_link_list(Node *&head, int v)
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

void insert_at_any_posi(Node *head, int pos, int v)
{
    Node *newnode = new Node(v);
    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Index" << endl;
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_link_list(Node *head)
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
    while (true)
    {
        int v;
        cout << "Enter your value: " << endl;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_link_list(head, v);
    }

    cout << "Enter queries";
    int q;
    cin >> q;
    while (q--)
    {
        int posi, val;
        cout << "Enter your position: " << endl;
        cin >> posi;
        cout << "Enter your value: " << endl;
        cin >> val;
        insert_at_any_posi(head, posi, val);
        print_link_list(head);
    }

    return 0;
}