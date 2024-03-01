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
        // root ber kore anlam
        Node *p = q.front();
        q.pop();

        // ja kaj ase
        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;

        if (l == -1)
        {
            myleft = NULL;
        }
        else
        {
            myleft = new Node(l);
        }
        if (r == -1)
        {
            myright = NULL;
        }
        else
        {
            myright = new Node(r);
        }

        p->left = myleft;
        p->right = myright;
        // children push kora
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

void levelorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    levelorder(root->left);
    if (root->left!=NULL)
    {
        cout << root->left->val << endl;
    }

    levelorder(root->right);
}

int main()
{
    Node *root = input_tree();
    levelorder(root);
    return 0;
}