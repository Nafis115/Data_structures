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
        next = NULL;
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
void print_link_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";

        temp = temp->next;
    }
}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_link_list(head, tail, v);
    }
    print_link_list(head);

   
    
    return 0;
}