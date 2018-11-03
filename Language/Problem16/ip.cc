#include "ip.h"

StringVector IPv4::split(const string& s) {
  StringVector sv;
  int i, j = 0, len = s.length();
  string tmp;

  for (i = 0; i <= len; ++i) {
    if (s[i] == '.' || i == len) {
      for (; j < i; ++j) {
        tmp += s[j];
      }
      sv.push_back(tmp);
      tmp.clear();
      j = i + 1;
    }
  }
  return sv;
}
bool IPv4::set_ip(const string& s) {
  StringVector sv = split(s);

  for (int i = 0; i < 4; ++i)
    b[i] = stoi(sv[3-i]);

  return true;
}
string IPv4::get_ip() const {
  string s;

  for (int i = 3; i >= 0; --i)
    s += to_string(b[i]) + '.';

  s.pop_back();
  return s;
}
unsigned IPv4::get_dword() const {
  return dword;
}
void IPv4::set_dword(unsigned dword) {
  this->dword = dword;
}
