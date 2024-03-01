#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> mylist;
    auto firststr = mylist.begin();

    string str;
    while (true)
    {
        cin >> str;
        if (str == "end")
        {
            break;
        }
        mylist.push_back(str);
    }

    int q;
    cin >> q;

    string s, s1;

    while (q--)
    {
        int va = 0;
        cin >> s;

        if (s == "visit")
        {
            cin >> s1;

            int posi = 0;
            for (auto it = mylist.begin(); it != mylist.end(); it++)
            {
                if (*it == s1)
                {
                    firststr = it;
                    cout << *it << endl;
                    va = 1;
                    break;
                }
                posi++;
            }

            if (va == 0)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s == "next")
        {

            if (firststr != prev(mylist.end()))
            {
                firststr++;
                cout << *firststr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (s == "prev")
        {

            if (firststr != mylist.begin())
            {
                firststr--;
                cout << *firststr << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
