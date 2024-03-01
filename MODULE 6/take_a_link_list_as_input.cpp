#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int val;
Node*next;
Node(int val){
  this->val=val;
  this->next=NULL;
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
int main(){
Node*head=NULL;
while(true){

    int v;
    cout<<"Enter your value: "<<endl;
    cin>>v;
     if (v==-1)
    {
        break;
    }
    insert_at_tail(head, v);
   
    
}
  

print_linked_list(head);







     return 0;
}