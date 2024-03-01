#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<string> q;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int c;
        cin >> c;
        if (c == 1 && q.empty())
        {
            cout << "Invalid" << endl;
        }
        if (c == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }

        if (c == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}