#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> mylist{1, 2, 3, 4, 5};
    list<int> newlist;
    mylist.push_back(10);
    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    mylist.push_front(50);

    for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;

    mylist.pop_back();
       for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    mylist.pop_front();
       for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    mylist.insert(next(mylist.begin(),2),100);
       for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    mylist.erase(next(mylist.begin(),2));
       for (int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}