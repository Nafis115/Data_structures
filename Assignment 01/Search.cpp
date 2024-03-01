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

    int q;
    cin >> q;
    while (q--)
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

        int x;
        cin >> x;
        int j = 0;
        int count = 1;
        int a = -1;
        for (Node *i = head; i != NULL; i = i->next)
        {

            if (i->val == x)
            {
                cout << j << endl;
                count = 0;
                break;
            }
        

            j++;
        }

        if (count == 1)
        {
            cout << a << endl;
        }
    }

    return 0;
}