#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <boost/foreach.hpp>


// void PrintList(const std::list <float> &_l	)
// {
// //	std::list <float>::const_iterator it;
	
// 	std::cout <<"******"<<std::endl;
// 	for(auto it = _l.begin(); it !=_l.end(); ++it)
// 	{
// 		std::cout <<*it<<std::endl;
// 	}
// 	std::cout <<"******"<<std::endl;

// }


// void PrintList(
// 								const std::list <float> &_l
// 							)
// {
// 	std::cout <<"******"<<std::endl;
// 	BOOST_FOREACH(float f,_l)
// 	{
// 		std::cout <<f<<std::endl;
// 	}
// 	std::cout <<"******"<<std::endl;
// }


void PrintList(const std::list <float> &_l)
{
	auto begin=std::rbegin(_l);//.begin();
	auto end=std::rend(_l);//.end();
	std::cout <<"******"<<std::endl;
	while(begin != end)
	{
		std::cout <<*begin++<<std::endl;
	}
	std::cout <<"******"<<std::endl;
}


// void PrintList(const std::list <float> &_l)
// {
// 	for(auto f : _l)
// 	{
// 		std::cout<<f<<"\n";
// 	}

// }


int main(void)
{
	std::list <float> ToSort;

	ToSort.push_back(2.0);
	ToSort.push_back(9.0);
	ToSort.push_back(2.1);
	ToSort.push_front(12.0);
	ToSort.push_front(3.0);
	ToSort.push_front(3.0);

	PrintList(ToSort);
	ToSort.sort();
	std::cout <<"Sorted"<<std::endl;
	PrintList(ToSort);
	std::cout <<"reverse" <<std::endl;
	ToSort.reverse();
	PrintList(ToSort);

	std::cout <<"Front method "<<ToSort.front()<<std::endl;
	std::cout <<"Back method "<<ToSort.back()<<std::endl;
	std::cout << "Clear List"<<std::endl;
	ToSort.clear();
	std::cout <<"Add some more values "<<std::endl;
	ToSort.push_front(12.0);
	ToSort.push_front(3.0);
	ToSort.push_front(3.0);
	PrintList(ToSort);

	std::cout <<"Now remove unique values"<<std::endl;
	ToSort.unique();
	PrintList(ToSort);


	ToSort.clear();
	PrintList(ToSort);
	return EXIT_SUCCESS;
}

