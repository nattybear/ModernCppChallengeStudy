#include <iostream>
using namespace std;

int main() {
  int num1, num2, min, gcd;
  cin >> num1 >> num2;
  min = num1 < num2 ? num1 : num2;
  for (int i = 1; i <= max; ++i)
    if (i % num1 == 0 && i % num2 == 0)
      gcd = i;
  cout << gcd << endl;
}
