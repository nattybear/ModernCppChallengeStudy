#include <iostream>
#include <cmath>
#include <map>
using namespace std;

#define MAX 1000000

int get_sum_of_proper_divisors(int num);

int main() {
  int num;
  cin >> num;
  cout << get_sum_of_proper_divisors(num) << endl;
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
