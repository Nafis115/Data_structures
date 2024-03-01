#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (i == (n - 1))
            {
                break;
            }
           
            if (arr[i] > arr[i + 1])
            {
                flag = false;
            }
        }

        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}