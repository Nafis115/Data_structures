#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist;
    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }

        mylist.push_back(v);
    }
    mylist.sort();
    mylist.unique();

    for (int val : mylist)
    {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}