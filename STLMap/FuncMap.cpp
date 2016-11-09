#include <iostream>
#include <map>
#include <string>
#include <cstdlib>


void FuncA(int _value)
{
	std::cout <<"Function A "<<_value<<std::endl;
}

void FuncB(int _value)
{
	std::cout <<"Function B "<<_value<<std::endl;
}

void FuncC(int _value)
{
	std::cout <<"Function C "<<_value<<std::endl;
}

int main()
{
	std::map <std::string,void (*)(int)> MyMap;

	MyMap["run"]=&FuncA;
	MyMap["walk"]=&FuncB;
	MyMap["fire"]=&FuncC;

	MyMap["run"](56);
	MyMap["fire"](10);
	MyMap["walk"](1);
	return EXIT_SUCCESS;
}











