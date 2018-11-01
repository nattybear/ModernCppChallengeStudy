#include <string>
using namespace std;

#include "ip.h"

IPv4::IPv4(int dword) {
  this->dword = dword;
}
string IPv4::get_address() const {
  string s;
  for (int i = 3; i >= 0 ; --i)
    s += to_string(b[i]) + '.';
  s.pop_back();
  return s;
}
