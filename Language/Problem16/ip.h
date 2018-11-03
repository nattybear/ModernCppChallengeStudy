#include <vector>
#include <string>
using namespace std;

typedef vector<string> StringVector;

union IPv4 {
  private:
    unsigned dword;
    unsigned char b[4];

  public:
    StringVector split(const string& s);

    bool set_ip(const string& s);
    string get_ip() const;

    unsigned get_dword() const;
    void set_dword(unsigned dword);
};
