#ifndef _IP_
#define _IP_

#include <string>
#include <vector>
using namespace std;

class IPv4 {
  private:
    string address;
  public:
    const string& get_address() const { return address; }
    bool set_address(const string& address);
    vector<string> split(const string& s);
    bool is_valid(int num) const;
};

#endif
