#include "simple.h"
#include <iostream>
int main()
{
//  SimpleString s = new SimpleString();

  SimpleString s;
  s.init("The quick brown fox");
  s.add(" jumped over the lazy dog");
  std::cout << s.show() << std::endl;

  s.init("Now is the time ");
  s.add("all good people");
  std::cout << s.show() << std::endl;

  std::cout << "done\n";
}

