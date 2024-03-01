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

    cout << "Inserted in tail" << endl;
}

void print_linked_list(Node *head)
{
    cout << "Your link list: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}
void insert_at_any_posi(Node *head, int posi, int v)
{

    Node *newnode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= posi - 1; i++)
    {
        temp = temp->next;
          if (temp == NULL)
    {
        cout << "Invalid Index" << endl;
        return;
    }

    }
  
    newnode->next = temp->next;
    temp->next = newnode;
    cout << "Insert Completed" << endl
         << endl;
}
void insert_at_head(Node *&head, int v)
{
    Node *newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
void delete_from_position(Node *head, int posi)
{
    Node *temp = head;
    for (int i = 1; i <= posi - 1; i++)
    {
        temp = temp->next;
    }
  

    Node *deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
    cout << "Delete done" << endl;
}

void delete_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "Head is not available" << endl;
        return;
    }

    Node *deletenode = head;
    head = head->next;
    delete deletenode;
    cout << "Head node deleted" << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1:  insert at tail" << endl;
        cout << "Optio 2:  Print Linked list" << endl;
        cout << "Option 3:  Insert at any position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Delete from postion" << endl;
        cout << "Option 6: Delete head" << endl;
        cout << "Option 7: Terminate the programme" << endl;
        cout << "Enter any option: ";
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter a value: " << endl;
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter your postiton to insert: " << endl;
            int pos;
            cin >> pos;
            cout << "Enter your value: " << endl;
            int v;
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_any_posi(head, pos, v);
            }
        }
        else if (op == 4)
        {
            cout << "Enter your value to inser1t head: " << endl;
            int v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 5)
        {
            cout << "Enter your postion to delete: " << endl;
            int posi;
            cin >> posi;
            delete_from_position(head, posi);
        }
        else if (op == 6)
        {
            delete_head(head);
        }

        else if (op == 7)
        {
            cout << "Programme Terminated" << endl;
            break;
        }
    }

    return 0;
}