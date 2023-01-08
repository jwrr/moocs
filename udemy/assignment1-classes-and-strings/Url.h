// =====================================================================
// Url.h

#include <string>

class Url
{
  private:
    std::string protocol{"http"};
    std::string resource{""};
  public:
    Url();
    Url(std::string p, std::string r);
    void display();
};

