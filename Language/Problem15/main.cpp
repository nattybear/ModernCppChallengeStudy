#include <iostream>

#include "ip.h"

int main() {
  string address;
  cin >> address;
  IPv4 ip;
  ip.set_address(address);
  cout << ip.get_address() << endl;
}
