#include <iostream>
using namespace std;

static int prime_factor = 2;

bool is_prime(int num);
void next_prime();
int get_prime_factors(int num);

int main() {
  int num;
  cin >> num;
  get_prime_factors(num);
}
bool is_prime(int num) {
  for (int i = 2; i < num; ++i)
    if (num % i == 0)
      return false;
  return true;
}
void next_prime() {
  while (!is_prime(++prime_factor)) {}
}
int get_prime_factors(int num) {
  if (is_prime(num)) {
    cout << num << endl;
    return 0;
  }
  if (num % prime_factor == 0) {
    cout << prime_factor << ' ';
    return get_prime_factors(num / prime_factor);
  }
  next_prime();
  return get_prime_factors(num);
}
