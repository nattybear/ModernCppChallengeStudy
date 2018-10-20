#include <iostream>
#include <bitset>
using namespace std;

typedef bitset<5> bit;

bit to_gray(int);

int main() {
  for (int i = 0; i < 32; ++i)
    cout << i << ' ' << to_gray(i) << endl;
}
bit to_gray(int num) {
  bit gray, normal(num);
  gray[4] = normal[4];
  for (int i = 3; i >= 0 ; --i)
    gray[i] = normal[i+1] ^ normal[i];
  return gray;
}
