#include <iostream>
#include <list>
#include <algorithm>

void printFunc(int i)
{
	std::cout<<i<<"\n";
}

int Double(int i) { return i*2;}

int main()
{

	std::list <int> myList;
	myList.push_back(2);
	myList.push_back(4);
	myList.push_back(5);
	myList.push_back(6);
	myList.push_back(2);

	std::list <int> secondList;
	secondList.resize(myList.size());

	std::for_each(myList.begin(),myList.end(),printFunc);

	std::transform(myList.begin(),myList.end(),secondList.begin(),Double);
	std::cout<<"second\n";
	std::for_each(secondList.begin(),secondList.end(),printFunc);

}











