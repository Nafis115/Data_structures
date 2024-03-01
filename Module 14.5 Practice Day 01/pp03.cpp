#include <bits/stdc++.h>
using namespace std;
class Mystack
{
public:
    list<int> l;
    void push(int v)
    {
        l.push_back(v);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{

    Mystack st, st1, st3;
    int n;
    cout << "Enter your size: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < n; i++)
    {
        while (!st.empty())
        {
            st1.push(st.top());
            st.pop();
        }
    }

 
    while(!st1.empty())
    {
        cout<<st1.top()<<endl;
        st1.pop();
    }

    return 0;
}