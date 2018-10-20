#include <iostream>
using namespace std;

#define MAX 1000000

static unsigned step;

unsigned collatz(unsigned num);

int main() {
  unsigned num;
  cin >> num;
  collatz(num);
  cout << step << endl;
}
unsigned collatz(unsigned num) {
  ++step;
  if (num == 1)
    return step;
  if (num % 2 == 0)
    return collatz(num / 2);
  return collatz(num*3 + 1);
}
