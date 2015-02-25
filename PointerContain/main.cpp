#include <iostream>
#include <vector>
#include <boost/shared_ptr.hpp>
#include "Mem.h"

int main()
{
  {
    std::cout<<"scoped std::vector auto\n";

    Mem a(10);
    Mem b(10);
    std::vector<Mem>v;
    v.push_back(a);
    v.push_back(b);
  }
  std::cout<<"end auto scope\n";

  {
    std::cout<<"scoped std::vector dynamic\n";

    std::vector<Mem *>v;
    v.push_back(new Mem(10));
    v.push_back(new Mem(10));
    v.clear();
  }
  std::cout<<"end dynamic scope\n";

  {
    std::cout<<"scoped std::vector dynamic with delete\n";

    std::vector<Mem *>v;
    v.push_back(new Mem(10));
    v.push_back(new Mem(10));
    for(size_t i=0; i<v.size(); ++i)
      delete v[i];
    v.clear();
  }
  std::cout<<"end dynamic scope\n";

  {
    std::cout<<"shared pointer\n";

    std::vector<boost::shared_ptr<Mem > >v;
    v.push_back( boost::shared_ptr<Mem >(new Mem(10)) );
    v.push_back( boost::shared_ptr<Mem >(new Mem(10)) );
    v.clear();
  }
  std::cout<<"end smart pointer scope\n";


}
