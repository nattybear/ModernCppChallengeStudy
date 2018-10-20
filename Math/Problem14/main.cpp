#include <iostream>
#include <string>
using namespace std;

bool is_valid_isbn(const string& isbn);

int main() {
  string isbn;
  cin >> isbn;
  if (is_valid_isbn(isbn))
    cout << "valid" << endl;
  else
    cout << "not valid" << endl;
}
bool is_valid_isbn(const string& isbn) {
  int sum = 0;
  for (int i = 0; i < isbn.size(); ++i)
    sum += (isbn[i] - '0') * (i + 1);
  return sum % 11 == 0 ? true : false;
}
