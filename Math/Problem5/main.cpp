#include <iostream>
using namespace std;

bool is_prime(int num);

int main() {
  int limit, i, j;
  cin >> limit;
  for (i = 2; i < limit; ++i) {
    j = i + 6;
    if (is_prime(i) && is_prime(j))
      cout << i << ' ' << j << endl;
  }
}    
bool is_prime(int num) {
  for (int i = 2; i < num; ++i)
    if (num % i == 0)
      return false;
  return true;
}
