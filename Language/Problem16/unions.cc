// unions.cc
// Defines and uses a union.
// -------------------------
#include <iostream>
using namespace std;

union WordByte {
  private:
    unsigned short w;  // 16 bits
    unsigned char b[2];  // Two bytes: b[0], b[1]
  public:
    unsigned short& word() { return w; }
    unsigned char& lowByte() { return b[0]; }
    unsigned char& highByte() { return b[1]; }
};
int main() {
  WordByte wb;
  wb.word() = 256;
  cout << "Word: " << (int)wb.word() << endl;
  cout << "Low-byte: " << (int)wb.lowByte() << endl;
  cout << "High-byte: " << (int)wb.highByte() << endl;
  return 0;
}
