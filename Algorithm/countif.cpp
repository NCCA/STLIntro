#include <iostream>
#include <algorithm>
#include <vector>

bool isOdd (int i) { return ((i%2)==1); }

int main ()
{
  int mycount;

  std::vector<int> myvector;
  for (int i=0; i<10123123; ++i)
  	myvector.push_back(i);

  mycount = (int) std::count_if (std::begin(myvector), std::end(myvector), isOdd);
  std::cout << "myvector contains " << mycount  << " odd values.\n";

  return 0;
}