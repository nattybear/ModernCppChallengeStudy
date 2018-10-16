#include <iostream>
using namespace std;

int main() {
  int i, limit, sum = 0;
  cin >> limit;
  for (i = 3; i <= limit; ++i)
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  cout << sum << endl;
}
