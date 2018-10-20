#include <iostream>
#include <cmath>
using namespace std;

#include "number.h"

int main(int argc, char* argv[]) {
  if (argc < 2)
    exit(1);
  unsigned lsb = 1, factor, degree;
  UnsignedMap lsb_map, num_map;
  UnsignedMap::iterator pos;
  for (int i = 1; i < argc; ++i) {
    Number num(argv[i]);
    num_map = num.get_map();
    for (pos = num_map.begin(); pos != num_map.end(); ++pos) {
      factor = pos->first;
      degree = pos->second;
      lsb_map[factor] = degree > lsb_map[factor] ? degree : lsb_map[factor];
    }
  }
  for (pos = lsb_map.begin(); pos != lsb_map.end(); ++pos) {
    factor = pos->first;
    degree = pos->second;
    lsb *= pow(factor, degree);
  }
  cout << lsb << endl;
}
