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
void input_link_list(Node*&head, Node*&tail, int v){
  Node*newnode=new Node(v);
    if (head==NULL)
    {
    head=newnode;
    tail=newnode;
    return;
    }
tail->next=newnode;
tail=newnode;
    
}

void print(Node*head){
    Node*temp=head;
    while (temp!=NULL)
    {
       cout<<temp->val<<" ";
       temp=temp->next;
    }
    cout<<endl;
    
}



int main(){
Node *head=NULL;
Node *tail=NULL;
int count=0;
int flag=0;
cout<<"Frist link list: "<<endl;
while (true)
{
    int v;
    cin>>v;
    if(v==-1){
        break;
    }

    input_link_list(head, tail, v);
    count++;

}

  cout<<"Insert link list"<<endl;
print(head);







//Second link list

Node *head1=NULL;
Node *tail1=NULL;
cout<<"Second link list Input: "<<endl;
while (true)
{
    int v1;
    cin>>v1;
    if(v1==-1){
        break;
    }

    input_link_list(head1, tail1, v1);
    flag++;

}

  cout<<"Insert link list"<<endl;
print(head1);



if (flag==count)
{
   cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}





     return 0;
}