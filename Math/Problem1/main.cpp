#include <iostream>

int main() {
  unsigned long long int sum;
  unsigned long int limit, i;
  cin >> limit;
  for (i = 3; i <= limit; ++i)
    if (i % 3 == 0 || i % 5 == 0)
      sum += i;
  cout << sum << endl;
}
