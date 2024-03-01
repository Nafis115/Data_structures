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
void input_link_list(Node *&head, Node *&tail, int v)
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

void print(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    print(head->next);
    cout << head->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;
    int flag = 0;
    cout << "Frist link list: " << endl;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }

        input_link_list(head, tail, v);
        count++;
    }

    cout << "Insert link list" << endl;
    print(head);

    return 0;
}