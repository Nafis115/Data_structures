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

vector<int> v;
vector<int> v1;
void push_leaf_vector(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
    }

    else
    {
        push_leaf_vector(root->left);
        push_leaf_vector(root->right);
    }
    cout << endl;
}
void push_leaf_vector1(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
    }
    else
    {
        push_leaf_vector(root->left);
        push_leaf_vector(root->right);
    }
}

int com()
{
    if (v.size() != v1.size())
        return 0;
    for (auto it = 0; it < v.size(); it++)
    {
        if (v[it] != v1[it])
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{

    Node *root = input_tree();
    Node *root1 = input_tree();
    push_leaf_vector(root);
    push_leaf_vector1(root1);

    int result = com();
    cout << result << endl;

    return 0;
}