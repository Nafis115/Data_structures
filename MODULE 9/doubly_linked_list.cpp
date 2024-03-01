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

void insert_at_posi(Node *head, int v, int posi)
{
    Node *newnode = new Node(v);
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
void delete_at_posi(Node *head, int posi)
{
    Node *temp = head;
    for (int i = 0; i < posi - 1; i++)
    {
        temp = temp->next;
    }
    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deletenode;
}
void delete_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    Node *delethead = head;
    head->next->prev = NULL;
    head = head->next;
    delete delethead;
}
int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void delete_tail(Node *&tail, Node *&head)
{
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail = tail->prev;
    tail->next = NULL;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    cout << "Enter your value to insert linked list: " << endl;
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

    cout << "Insetation compelete: " << endl;
    cout << "Your link list after insetation:  " << endl;
    print(head);

    cout << "Enter your position to insert: " << endl;
    int posi;
    cin >> posi;

    if (posi == 0)
    {
        cout << "Enter your value to insert head: " << endl;
        int v;
        cin >> v;
        insert_head(head, tail, v);
        cout << "Insert at head complete" << endl;
        cout << "Your link list after insert at head:" << endl;
        print(head);
    }
    else
    {
        cout << " Enter your value to insert any position: " << endl;
        int v;
        cin >> v;
        insert_at_posi(head, v, posi);
        cout << "Your link list after insert any positon: " << endl;
        print(head);
        cout << endl;
    }

    cout << "Delete operation: " << endl;
    cout << "Enter your positon to delete: " << endl;
    int pos;
    cin >> pos;

    if (pos == 0)
    {
        delete_head(head, tail);
        cout << "Your link list after delete head: " << endl;
        print(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(tail, head);
        cout << "Your link list after delete tail: " << endl;
        print(head);
    }else

    {
        delete_at_posi(head, pos);
        cout << "Your link list after delete  any positon: " << endl;
        print(head);
    }

    return 0;
}