#ifndef MEM_H__
#define MEM_H__
#include <iostream>
class Mem
{
  public :
    Mem(int _size,char _n) :m_size(_size),m_mem(new int[_size]),m_c(_n)
    {
      std::cout<<"ctor "<<m_c<<'\n';
    }
    Mem(): m_size(0),m_mem(0),m_c('z')
    {
      std::cout<<"default ctor "<<m_c<<'\n';
    }
    Mem(const Mem &_m){m_c=_m.m_c; std::cout<<"copy ctor "<<m_c<<'\n';}

    ~Mem()
    {
      std::cout<<"dtor "<<m_c<<'\n';
      if(m_mem !=NULL)
        delete [] m_mem;
    }
  private :
    int m_size;
    int *m_mem;
    char m_c;
};

#endif
