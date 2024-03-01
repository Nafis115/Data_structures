#include <bits/stdc++.h>
using namespace std;
class Mystack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
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
        return l.empty();
    }
};

class Myqeue
{
    list<int> q;

public:
    void push(int val)
    {
        q.push_back(val);
    }

    void pop()
    {
        q.pop_front();
    }

    int front()
    {
        return q.front();
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{
    Mystack st;
    Myqeue q1;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q1.push(x);
    }

    if (n == m)
    {
        int cnt = 1;
        while (!st.empty())
        {
            if (st.top() != q1.front())
            {
                cnt = 0;
                break;
            }
            st.pop();
            q1.pop();
        }

        if (cnt == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}