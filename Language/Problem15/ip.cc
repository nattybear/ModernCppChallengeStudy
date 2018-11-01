#include <iostream>
#include <string>
using namespace std;

#include "ip.h"

vector<string> IPv4::split(const string& s) {
  int i, j = 0, len = s.length();
  string tmp;
  vector<string> v;
  for (i = 0; i <= len; ++i)
    if (s[i] == '.' || i == len) {  // Dot or end of string
      for (; j < i; ++j)
        tmp += s[j]; 
      v.push_back(tmp);
      j = i + 1;
      tmp.clear();
    }
  return v;
}
bool IPv4::is_valid(int num) const {
  if (num < 0 || num > 255)
    return false;
  return true;
}
bool IPv4::set_address(const string& address) {
  vector<string> v = split(address);
  if (v.size() != 4) return false;
  vector<string>::const_iterator pos;
  for (pos = v.begin(); pos != v.end(); ++pos)
    if (!is_valid(stoi(*pos)))
      return false;
  this->address = address;
  return true;
}
