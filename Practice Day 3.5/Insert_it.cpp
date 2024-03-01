#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int max=10000;
int arr[max];
for (int  i = 0; i <n; i++)
{
    cin>>arr[i];
}
int n1;
cin>>n1;
int arr1[max];
for (int i = 0; i <n1; i++)
{
   cin>>arr1[i];
}
int pos;
cin>>pos;

  for (int i = n - 1; i >= pos; i--) {
        arr[i + n1] = arr[i];
    }


    for (int i = 0; i <n1; i++) {
        arr[pos+ i] = arr1[i];
    }

   n+=n1;

for (int  i = 0; i < n; i++)
{
 cout<<arr[i]<<" ";
}




     return 0;
}