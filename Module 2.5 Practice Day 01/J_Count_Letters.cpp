#include<bits/stdc++.h>

using namespace std;

int main() {
  string text;
  cin >> text;
vector<string>s;
s.push_back(text);
  int counts[26] = {}; 

  for (string c1 : s) {
  for(char c: c1){
    
      counts[c - 'a']++; 
    
  }}

  for (char c = 'a'; c <= 'z'; ++c) {
    if (counts[c - 'a']) {
      cout << c <<" "<< ": " << counts[c - 'a'] << endl;
    }
  }
return 0;
} 
