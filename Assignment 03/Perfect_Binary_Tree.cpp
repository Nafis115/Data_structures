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
int count(Node *root)
{
    if (root == NULL)
        return 0;
    int l = count(root->left);
    int r = count(root->right);
    return (l + r) + 1;
}

int maxheight(Node *root)
{
    if (root == NULL)
        return 0;

    int l = maxheight(root->left);
    int r = maxheight(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    int depth = maxheight(root);

    int tn = pow(2, depth) - 1;

    int re = count(root);

    if(tn==re) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}