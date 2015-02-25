#include <iostream>
#include <algorithm>
#include <vector>

bool isOdd (int i) { return ((i%2)==1); }

int main ()
{
  int mycount;

  std::vector<int> myvector;
  for (int i=0; i<100123123; ++i)
  	myvector.push_back(i);

  mycount = (int) std::count_if (myvector.begin(), myvector.end(), isOdd);
  std::cout << "myvector contains " << mycount  << " odd values.\n";

  return 0;
}