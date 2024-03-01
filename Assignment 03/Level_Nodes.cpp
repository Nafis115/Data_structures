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

int level1;
void levelorder1(Node *root, int s)
{

    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    else
        return;
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        level1 = pr.second;
        q.pop();

        if (node->left)
            q.push({node->left, level1 + 1});
        if (node->right)
            q.push({node->right, level1 + 1});
    }
}
void levelorder(Node *root, int s)
{
    if (s > level1)
        cout << "Invalid" << endl;
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    else
        return;
    while (!q.empty())
    {
        pair<Node *, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (level == s)
        {
            cout << node->val << " ";
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    levelorder1(root, x);
    levelorder(root, x);

    return 0;
}