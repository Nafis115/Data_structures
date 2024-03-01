#include<bits/stdc++.h>
using namespace std;
int main(){

    cout << "Enter your size: " << endl;
    queue<int> q,q1;
    int n1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
stack<int>st;
while (!q.empty())
{
  st.push(q.front());
   q.pop();
}

while (!st.empty())
{
   q1.push(st.top());
   st.pop();

}


while (!q1.empty())
{
  cout<<q1.front();
  q1.pop();
}





     return 0;
}