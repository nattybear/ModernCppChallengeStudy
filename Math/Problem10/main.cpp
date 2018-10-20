#include <iostream>
#include <bitset>
using namespace std;

typedef bitset<5> bit;

bit to_gray(const bit&);

int main() {
  for (int i = 0; i < 32; ++i) {
    bit normal(i);
    cout << normal << ' ' << to_gray(normal) << endl;
  }
}
bit to_gray(const bit& normal) {
  bit gray;
  gray[4] = normal[4];
  for (int i = 3; i >= 0 ; --i)
    gray[i] = normal[i+1] ^ normal[i];
  return gray;
}
