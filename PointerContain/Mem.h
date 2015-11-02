#ifndef MEM_H__
#define MEM_H__
#include <iostream>
class Mem
{
  public :
    Mem(int _size,char _n) : m_mem(new int[_size]),m_c(_n)
    {
      std::cout<<"ctor "<<m_c<<'\n';
    }
    Mem(): m_mem(nullptr),m_c('d')
    {
      std::cout<<"default ctor "<<m_c<<'\n';
    }
    Mem(const Mem &_m){m_c=_m.m_c; std::cout<<"copy ctor "<<m_c<<'\n';}

    ~Mem()
    {
      std::cout<<"dtor "<<m_c<<'\n';
      if(m_mem !=nullptr)
        delete [] m_mem;
    }
  private :
    int *m_mem;
    char m_c;
};

#endif
