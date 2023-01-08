// =====================================================================
// Url.cpp

#include <iostream>
#include "Url.h"

Url::Url()
{
  
}

Url::Url(std::string p, std::string r)
{
  this->protocol = p;
  this->resource = r;
}

void Url::display() {
  std::cout << this->protocol << "::" << this->resource << std::endl;
}

