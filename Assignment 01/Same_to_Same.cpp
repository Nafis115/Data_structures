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
void insert_link_list1(Node *&head, Node *&tail, int v)
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

void compare(Node *head, Node *head1,int s,int s1)
{

    int count = 1;
    Node *temp = head;
    Node *temp1 = head1;


    if (s==s1)
    {
            while (temp != NULL || temp1 != NULL)
    {
        if (temp->val!=temp1->val)
        {
          count=0;
        }

        temp = temp->next;
        temp1 = temp1->next;
    }
    }else{
        count=0;
    }
    

    if (count==1)
    {
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int s = 0;
    int s1 = 0;
    while (true)
    {
        long long int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        s++;
        insert_link_list(head, tail, v);
    }
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        long long int v1;
        cin >> v1;
        if (v1 == -1)
        {
            break;
        }
        s1++;
        insert_link_list1(head1, tail1, v1);
    }

    compare(head, head1,s,s1);

    return 0;
}