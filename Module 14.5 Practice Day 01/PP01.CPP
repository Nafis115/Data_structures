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

    Mystack st, st1;
    int n;
    cout << "Enter your size: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    int n1;
    cout << "Enter your size: " << endl;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    int cnt = 1;
    if (st.size() == st1.size())
    {

        while (!st1.empty())
        {
            if (st.top() != st1.top())
            {
                cnt = 0;
            }
            st.pop();
            st1.pop();
        }

        if (cnt)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}