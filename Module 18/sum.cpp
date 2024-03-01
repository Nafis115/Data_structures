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
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }
        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }

        f->left = left;
        f->right = right;

        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
    return root;
}
int tilt;

int sum(Node *root,int sum1)
{

    if (root == NULL)
    {
        return 0;
    }
      int l= sum(root->left,sum1);
      int r= sum(root->right,sum1);
      int til=abs(l-r);
      tilt+=til;
     return l+r+root->val;

      
    
}

int main()
{
    Node *root = input_tree();
 
    int result = sum(root,0);
    cout << result << endl;
cout<<tilt;
    return 0;
}
