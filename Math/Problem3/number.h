#include <map>
#include <cstdlib>

typedef std::map<unsigned, unsigned> UnsignedMap;

bool is_prime(int);

class Number {
  private:
    unsigned num;
    unsigned prime_factor;
    UnsignedMap prime_factors_map;
  public:
    Number(const char* num) {
      this->num = atoi(num);
      prime_factor = 2;
      get_prime_factors(this->num);
    }
    void next_prime() {
      while (!is_prime(++prime_factor)) {}
    }
    int get_prime_factors(int num) {
      if (is_prime(num)) {
        ++prime_factors_map[num];
        return 0;
      }
      if (num % prime_factor == 0) {
        ++prime_factors_map[prime_factor];
        return get_prime_factors(num / prime_factor);
      }
      next_prime();
      return get_prime_factors(num);
    }
    UnsignedMap get_map() const { return prime_factors_map; }
};
bool is_prime(int num) {
  for (int i = 2; i < num; ++i)
    if (num % i == 0)
      return false;
  return true;
}
