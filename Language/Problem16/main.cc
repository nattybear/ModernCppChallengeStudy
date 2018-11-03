#include <iostream>
using namespace std;

#include "ip.h"

int main(int argc, char* argv[]) {
  IPv4 ip1, ip2, tmp;
  int start, end;

  ip1.set_ip(argv[1]);
  ip2.set_ip(argv[2]);

  start = ip1.get_dword();
  end = ip2.get_dword();

  for (int i = start; i <= end; ++i) {
    tmp.set_dword(i);
    cout << tmp.get_ip() << endl;
  }
}
