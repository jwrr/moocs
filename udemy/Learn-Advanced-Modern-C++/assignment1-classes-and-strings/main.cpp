// =====================================================================
// main.cpp

#include "Url.h"

#include <iostream>

int main()
{
  Url webpage{"https", "udemy.com/course/learn-intermediate-modern-c"};
  webpage.display();
  std::cout << "done\n";
  return 0;
}


