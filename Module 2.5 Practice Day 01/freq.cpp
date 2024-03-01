#include <iostream>
#include <string>

using namespace std;

int main() {
  string text;
  cin >> text;

  int counts[26] = {}; 

  for (char c : text) {
    if (islower(c)) { 
      counts[c - 'a']++; 
    }
  }

  cout << "Letter frequencies:" << endl;
  for (char c = 'a'; c <= 'z'; ++c) {
    if (counts[c - 'a']) {
      cout << c << ": " << counts[c - 'a'] << endl;
    }
  }
return 0;
}