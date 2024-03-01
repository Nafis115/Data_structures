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

    cout << "insert done" << endl;
}

void print(Node *head)
{
   
    Node *current=head;
    int count = 0;
    while (current!=NULL)
    {
         Node *temp = current->next;
   while (temp!=NULL)
   {
    if (current->val==temp->val)
    {
        count=1;
    }
    temp=temp->next;
   }
  current=current->next;
    }
  
    
    
    if (count == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }
}

int main()
{

    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }

        insert_at_tail(head, v);
    }

    print(head);

    return 0;
}