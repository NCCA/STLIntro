#include <iostream>
#include <map>
#include <string>
#include <cstdlib>

int main(void)
{
	std::map <std::string,int> MyMap;

	MyMap["Jon"]=120212442;
	MyMap["Office"]=123331452;
	MyMap["Land Line"]=243464343;

	std::cout <<MyMap["Jon"]<<std::endl;
	std::cout <<MyMap["Land Line"]<<std::endl;
	std::cout <<MyMap["Office"]<<std::endl;
	MyMap["Jon"]=442;
	std::cout<<MyMap.size()<<std::endl;
	std::cout<<MyMap["fred"]<<std::endl;
	std::cout <<MyMap["Jon"]<<std::endl;
	std::cout<<MyMap.size()<<std::endl;

	return EXIT_SUCCESS;
}