#include <bits/stdc++.h>
using namespace std;
int main()
{

    stack<int> st;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        st.push(n);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << st.top() << endl;
        st.pop();
    }
    if (!st.empty())
    {
        cout << st.top() << endl;
    }

    return 0;
}