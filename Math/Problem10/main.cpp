#include <iostream>
#include <bitset>
using namespace std;

typedef bitset<5> bit;

bit to_gray(const bit& normal);
bit to_normal(const bit& gray);

int main() {
  for (int i = 0; i < 32; ++i) {
    bit normal(i);
    bit gray = to_gray(normal);
    cout << normal << ' ' << gray << ' ' << to_normal(gray) << endl;
  }
}
bit to_gray(const bit& normal) {
  bit gray;
  gray[4] = normal[4];
  for (int i = 3; i >= 0 ; --i)
    gray[i] = normal[i+1] ^ normal[i];
  return gray;
}
bit to_normal(const bit& gray) {
  bit normal;
  normal[4] = gray[4];
  for (int i = 3; i >= 0; --i)
    normal[i] = normal[i+1] ^ gray[i];
  return normal;
}
