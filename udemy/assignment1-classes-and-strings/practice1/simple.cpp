#include "simple.h"
void SimpleString::init(std::string s)
{
  this->str = s;
}

void SimpleString::add(std::string s)
{
  this->str += s;
}

std::string SimpleString::show()
{
  return this->str;
}

