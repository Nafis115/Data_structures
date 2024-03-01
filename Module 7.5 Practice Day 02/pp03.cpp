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

void print(Node *head, int size, int pos)
{
    Node *temp = head;

    if (size % 2 == 0)
    {
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        cout << temp->val << " ";
        cout << temp->next->val;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }

        cout << temp->val;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;

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

    int re = count / 2;

    cout << "Insert link list" << endl;
    print(head, count, re);
    return 0;
}