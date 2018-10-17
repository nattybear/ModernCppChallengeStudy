#include <iostream>
#include <cmath>
#include <map>
using namespace std;

#define MAX 1000000

int get_sum_of_proper_divisors(int num);

map<int, int> m;

int main() {
  int sum;
  for (int i = 220; i < MAX; ++i) {
    sum = m[i];
    if (sum == 0)
      m[i] = sum = get_sum_of_proper_divisors(i);
    if (m[sum] == 0)
      m[sum] = get_sum_of_proper_divisors(sum);
    if (m[sum] == i)
      cout << i << ' ' << sum << endl;
  }
}
int get_sum_of_proper_divisors(int num) {
  int q, r, sum = 1;
  for (int i = 2; i <= sqrt(num); ++i) {
    q = num / i;
    r = num % i;
    if (r == 0)
      sum += q+i;
  }
  return sum;
}
