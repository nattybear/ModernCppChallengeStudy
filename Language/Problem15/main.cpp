#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "ip.h"

vector<string> split(const string& s);

int main() {
  cout << split("a.b.c.d").size() << endl;
}
vector<string> split(const string& s) {
  int i, j = 0, len = s.length();
  string temp;
  vector<string> v;
  for (i = 0; i < len; ++i)
    if (s[i] == '.' || i == len - 1) {
      for (; j < i; ++j)
        temp += s[j]; 
      v.push_back(temp);
      j = i;
    }
  return v;
}
