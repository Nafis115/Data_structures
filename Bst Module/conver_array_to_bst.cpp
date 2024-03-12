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
Node *convert(int arr[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *leftnode = convert(arr, n, l, mid - 1);
    Node *rightnode = convert(arr, n, mid + 1, r);
    root->left = leftnode;
    root->right = rightnode;
    return root;
}
void levelorder(Node *root)
{
    queue<Node *> q;
    if (root)
        q.push(root);
    else
        cout << "tree nai" << endl;
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        cout << p->val << endl;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
}
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  Node*root=  convert(arr,n,0,n-1);

  levelorder(root);


    return 0;
}
