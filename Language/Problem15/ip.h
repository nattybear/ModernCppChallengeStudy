#include <string>

class IPv4 {
  private:
    std::string address;
  public:
    const std::string& get_address() const { return address; }
    void set_address(const std::string& address) {
      this->address = address;
    }
    bool is_valid(int num) const {
      if (num < 0 || num > 255)
        return false;
      return true;
    }
};
