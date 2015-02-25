#ifndef MEM_H__
#define MEM_H__
#include <iostream>
class Mem
{
  public :
    Mem(int _size) :m_size(_size),m_mem(new int[_size])
    {
      std::cout<<"ctor \n";
    }
    Mem(){std::cout<<"default ctor\n";}
    Mem(const Mem &){std::cout<<"copy ctor\n";}
    ~Mem(){std::cout<<"dtor\n";}
  private :
    int m_size;
    int *m_mem;
};

#endif
