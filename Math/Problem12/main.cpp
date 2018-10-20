#include <iostream>
using namespace std;

#define MAX 1000000

static unsigned step;

unsigned collatz(unsigned num);

int main() {
  unsigned max_step = 0, max_num = 0;
  for (int i = 3; i <= MAX; ++i) {
    collatz(i);
    if (step > max_step) {
      max_step = step;
      max_num = i;
    }
    step = 0;
  }
  cout << max_num << ' ' << max_step << endl;
}
unsigned collatz(unsigned num) {
  ++step;
  if (num == 1)
    return 0;
  if (num % 2 == 0)
    return collatz(num / 2);
  return collatz(num*3 + 1);
}
