#include <iostream>
using namespace std;

int main() {
  int num1, num2, min, gcd;
  cin >> num1 >> num2;
  min = num1 < num2 ? num1 : num2;
  for (int i = 1; i <= min; ++i)
    if (num1 % i == 0 && num2 % i == 0)
      gcd = i;
  cout << gcd << endl;
}
