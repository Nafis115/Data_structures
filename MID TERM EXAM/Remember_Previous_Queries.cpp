#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<long long int> mylist;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            mylist.push_front(v);
        }
        else if (x == 1)
        {
            mylist.push_back(v);
        }
        else if (x == 2)
        {
              if (v < mylist.size()) 
              
            {
                auto it = next(mylist.begin(), v);
                mylist.erase(it);
            }
        }

        if (mylist.empty())
        {
            cout << "L -> " << endl;
            cout << "R -> " << endl;
        }
        else
        {
            cout << "L -> ";
            for (int val : mylist)
            {
                cout << val << " "; // l print
            }

            cout << endl;

            cout << "R -> ";
            auto it = mylist.end();
            while (it != mylist.begin()) // r print
            {
                --it;
                cout << *it << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
