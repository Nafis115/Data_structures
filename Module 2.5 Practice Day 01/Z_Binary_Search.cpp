#include<bits/stdc++.h>
using namespace std;
int main(){

  int l,m;
  cin>>l>>m;
  int n;
  vector<int>v(l);
  for (int  i = 0; i < l; i++)
  {
    int q;
    cin>>q;
  v.push_back(q);
  }
  

for (int i = 0; i <m; i++)
{
   int n1;
   cin>>n1;
   auto it=find(v.begin(),v.end(),n1);
   if(it==v.end()){
    cout<<"not found"<<endl;
   }else{
    cout<<"found"<<endl;
   }

}





     return 0;
}