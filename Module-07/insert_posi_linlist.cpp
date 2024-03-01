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
void insert_at_any_posi(Node*head, int posi, int v){
Node*newnode=new Node(v);
Node*temp=head;
for (int  i = 0; i <posi-1; i++)
{
   temp=temp->next;
}
newnode->next=temp->next;
temp->next=newnode;

}
int main(){
Node*head=NULL;
Node*tail=NULL;
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
    cout<<"After inserting link list: "<<endl;
    print_link_list(head);
    cout<<endl;
    cout<<"Enter position to insert: ";
    int posi;
    cin>>posi;
    cout<<"Enter your value: ";
    int v;
    cin>>v;
insert_at_any_posi(head, posi,v);
cout<<"After insert at position: "<<endl;
print_link_list(head);



  









     return 0;
}