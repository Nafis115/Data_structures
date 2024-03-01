#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter your size: " << endl;
    stack<int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cout << "Enter your size: " << endl;
    queue<int> q;
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    int cnt = 1;
    if (st.size() == q.size())
    {
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                cnt = 0;
            }
            st.pop();
            q.pop();
            
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