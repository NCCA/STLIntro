#include <iostream>
#include <vector>
#include <algorithm>

void printFunc(int i)
{
	std::cout<<i<<"\n";
}

int main()
{

	std::vector <int> data;
	for(int i=0; i<20; ++i)
		data.push_back(i);
	std::for_each(data.begin(),data.end(),printFunc);
	std::random_shuffle(data.begin(),data.end());
	std::cout<<"shuffle\n";
	std::for_each(data.begin(),data.end(),printFunc);


}