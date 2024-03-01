#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    Node *root;
    queue<Node *> q;
    int val;
    cin >> val;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        Node *myleft;
        Node *myright;
        int l, r;
        cin >> l >> r;
        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }

        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        node->left = myleft;
        node->right = myright;
        if (node->left)
            q.push(node->left);
        if (node->right)
            q.push(node->right);
    }
    return root;
}

void  leftorder(Node *root)
{
    if (root == NULL)
        return;

     leftorder(root->left);
   
      if (root->left==NULL)
      {
         leftorder(root->right);
      }
         cout<< root->val<<" ";
      

}
void rootprint(Node*root){
    cout<<root->val<<" ";
}


void rightprint(Node *root)
{
    if (root == NULL)
        return;
     cout<<root->val<<" ";
    rightprint(root->right);
    if(root->right==NULL){
        rightprint(root->left);
    }
 
}
int main()
{
    Node *root = input_tree();
    leftorder(root->left);
    rootprint(root);
    rightprint(root->right);

    return 0;
}