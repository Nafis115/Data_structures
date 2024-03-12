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
     int val;
     cin >> val;
     if (val == -1)
          root = NULL;
     else
          root = new Node(val);
     queue<Node *> q;
     if (root)
          q.push(root);
     while (!q.empty())
     {
          Node *p = q.front();
          q.pop();

          Node *myleft;
          Node *myright;
          int l, r;
          cin >> l >> r;
          if (l == -1)
               myleft = NULL;
          else
               myleft = new Node(l);
          if (r == -1)
               myright = NULL;
          else
               myright = new Node(r);
          p->left = myleft;
          p->right = myright;
          if (p->left)
               q.push(p->left);
          if (p->right)
               q.push(p->right);
     }

     return root;
}
void level_order(Node *root)
{
     if (root == NULL)
     {
          cout << "tree doesn't exist" << endl;
          return;
     }
     queue<Node *> q;
     if (root)
          q.push(root);
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
bool search(Node *root, int x)
{
     if (root == NULL)
          return false;
     if (root->val == x)
          return true;
     if (root->val > x)
     {
          return search(root->left, x);
     }

     else
     {
          return search(root->right, x);
     }
}
int main()
{
     Node *root = input_tree();
     level_order(root);

     if (search(root, 19))
          cout << "ase" << endl;
     else
          cout << "nai" << endl;

     return 0;
}