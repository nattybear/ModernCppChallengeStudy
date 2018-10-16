#include <iostream>
using namespace std;

bool is_prime(int num);

int main() {
  int limit, result;
  cin >> limit;
  for (int i = 2; i < limit; ++i)
    if (is_prime(i))
      result = i;
  cout << result << endl;
}
  
bool is_prime(int num) {
  for (int i = 2; i < num; ++i)
    if (num % i == 0)
      return false;
  return true;
}
