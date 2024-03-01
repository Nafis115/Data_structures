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
int size(Node *head)
{
  int cnt = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    cnt++;
    temp = temp->next;
  }
  return cnt;
}

void compare(Node *head, Node *head1)
{
  Node *temp = head;
  Node *temp1 = head1;
  int cnt = 1;
  if (size(temp1) != size(temp))
  {
    cnt = 0;
  }
  else
  {
    while (temp != NULL && temp1 != NULL)
    {
      if (temp->val != temp1->val)
      {
        cnt = 0;
      }

      temp = temp->next;
      temp1 = temp1->next;
    }
  }
  if (cnt == 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
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
    insert_list(head, tail, v);
  }

  Node *head1 = NULL;
  Node *tail1 = NULL;
  while (true)
  {
    int v1;
    cin >> v1;
    if (v1 == -1)
    {
      break;
    }
    insert_list(head1, tail1, v1);
  }
  compare(head, head1);
  return 0;
}