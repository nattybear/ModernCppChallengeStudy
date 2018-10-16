#include <iostream>
using namespace std;

int main() {
  int num1, num2, max, gcd;
  cin >> num1 >> num2;
  max = num1 > num2 ? num2 : num1;
  for (int i = 1; i <= max; ++i)
    if (i % num1 == 0 && i % num2 == 0)
      gcd = i;
  cout << gcd << endl;
}
