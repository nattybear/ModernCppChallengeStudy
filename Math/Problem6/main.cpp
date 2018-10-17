#include <iostream>
using namespace std;

int main() {
  int limit, sum;
  cin >> limit;
  for (int i = 12; i < limit; ++i) {
    sum = 0;
    for (int j = 1; j < i; ++j)
      if (i % j == 0)
        sum += j;
    if (sum > i)
      cout << i << ' ' << sum - i << endl;
  }
}
