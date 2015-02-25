#include "Vector.h"
#include <iostream>
#include <cstdlib>

template <class T> T Lerp(
                          T _a,
                          T _b,
                          float _t
                          )
{
	T p;
	p=_a+(_b-_a)*_t;
	return p;
}



int main()
{
  std::cout<<"Vector Test\n";
  Vector v1(1,2,3);
  Vector v2(2,3,4);
  Vector *v3=new Vector(2,3,4);

  std::cout<<v1<<v2<<v3<<"\n";


  std::cout<<v1<<v2<<"\n";
  v1+=v2;
  std::cout<<v2<<"\n";
  v2[0]=10;
  std::cout<<v2[0]<<"\n";
  Vector v4=Lerp(v1,v2,0.2);
  std::cout<<v4<<"\n";

  return EXIT_SUCCESS;

}
