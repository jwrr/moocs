#pragma once

#include <string>

class SimpleString {
  private:
    std::string str{"default string"};
  public:
    void init(std::string s);
    void add(std::string s);
    std::string show();
};



