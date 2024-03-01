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
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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
bool sorter_checker(Node *head)
{
  Node *temp=head;
  while (temp!=NULL && temp->next!=NULL)
  {
   if (temp->val>temp->next->val)
   {
    return false;
   }
   temp=temp->next;
  }
  


return true;

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

if (    sorter_checker(head)==true)
{
  cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}

    return 0;
}