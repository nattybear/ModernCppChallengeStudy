#include <iostream>
using namespace std;

int main() {
  register int i, j, k;
  int num, sum;
  for (i = 1; i < 10; ++i) {
    for (j = 0; j < 10; ++j) {
      for (k = 0; k < 10; ++k) {
        num = 100*i + 10*j + k;
        sum = i*i*i + j*j*j + k*k*k;
        if (num == sum)
          cout << num << endl;
      }
    }
  }
}
