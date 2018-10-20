#include <iostream>
#include <string>
using namespace std;

const string i = "I";  // 1
const string v = "V";  // 5
const string x = "X";  // 10
const string l = "L";  // 50
const string c = "C";  // 100
const string d = "D";  // 500
const string m = "M";  // 1000

const string operator*(const string& letter, unsigned num);
const string to_roman(int num);

int main() {
  unsigned num;
  cin >> num;
  cout << to_roman(num) << endl;
}
const string operator*(const string& letter, unsigned num) {
  string result;
  for (int i = 0; i < num; ++i)
    result += letter;
  return result;
}
const string to_roman(int num) {
  unsigned quotient, remainder;
  string first;
  if (num < 10) {
    if (num == 9) return i + x;
    if (num == 4) return i + v;
    quotient = num / 5;
    remainder = num % 5;
    return v * quotient + i * remainder;
  }
  if (num < 50) {
    quotient = num / 10;
    remainder = num % 10;
    first = quotient == 4 ? x + l : x * quotient;
    return first + to_roman(remainder);
  }
  if (num < 100) {
    quotient = num / 10;
    first = quotient == 9 ? x + c : l * (quotient-5);
    remainder = num % 10;
    return first + to_roman(remainder);
  }
  if (num < 500) {
    quotient = num / 100;
    remainder = num % 100;
    first = quotient == 4 ? c + d : c * quotient;
    return first + to_roman(remainder);
  }
  if (num < 1000) {
    quotient = num / 100;
    first = quotient == 9 ? c + m : d * (quotient-5);
    remainder = num % 100;
    return first + to_roman(remainder);
  }
  quotient = num / 1000;
  remainder = num % 1000;
  return m * quotient + to_roman(remainder);
}
