#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    int n, m;
    cin >> n>>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int> q;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (n == m)
    {
        int cnt = 1;
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                cnt = 0;
                break;
            }

            q.pop();
            st.pop();
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