union IPv4 {
  private:
    unsigned int dword;
    unsigned char b[4];
  public:
    IPv4(int dword);
    string get_address() const;
    void set_address(const string& address);
};
