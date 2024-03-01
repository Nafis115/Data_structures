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
void insert_at_tail(Node *&head, int v)
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp=temp->next;
    }
    cout << endl;
}
int main()
{

    Node *head = NULL;
    int count = 0;
    while (true)
    {
        int v;
        cin >> v;
        if (v==-1)
        {
            break;
        }
        
      

        insert_at_tail(head, v);
        count++;
    }
    cout << count << endl;

    return 0;
}