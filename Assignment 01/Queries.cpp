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
void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
    if (tail == NULL)
    {
        tail = newnode;
    }
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
int size(Node *head)
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
void delete_link(Node *head, Node*&tail, int posi)
{
    Node *temp = head;
    for (int i = 0; i < posi - 1; i++)
    {
        temp = temp->next;
    }
if (temp->next->next==NULL)
{
    tail=temp;
}

    Node *deltenode = temp->next;
    temp->next = temp->next->next;
    delete deltenode;
}

void delete_head(Node *&head)
{
    Node *deltenode = head;
    head = head->next;
    delete deltenode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;

    cin >> q;
    while (q--)
    {
        int x;

        cin >> x;
        int v;
        if (x == 0)
        {
            cin >> v;
            insert_head(head, tail, v);
        }
        else if (x == 1)
        {
            cin >> v;
            
            insert_tail(head, tail, v);
        }
        else if (x == 2)
        {

            cin >> v;
            if (v >= size(head))
            {

                print(head);
                continue;
            }

            if (v == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_link(head,tail, v);
            }
        }

        print(head);
    }

    return 0;
}