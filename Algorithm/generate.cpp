#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

int randNum()
{
	return rand()%100;
}

void printFunc(int i)
{
	std::cout<<i<<"\n";
}


int main()
{

	std::vector <int> randomNumbers;
	randomNumbers.resize(1000);
	std::generate(randomNumbers.begin(),randomNumbers.end(),randNum);
	std::for_each(randomNumbers.begin(),randomNumbers.end(),printFunc);
	std::cout<<"*********\n";
	std::for_each(randomNumbers.rbegin(),randomNumbers.rend(),printFunc);

}