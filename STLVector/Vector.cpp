#include <iostream>
#include <vector>
#include <cstdlib>
#include <boost/foreach.hpp>
#include "Point3.h"


int main()
{
	std::vector <Point3> PointList;

	for (int i=0; i<10; ++i)
	{
		PointList.push_back(Point3(i,i,i));
	}
	// we can access elements like a normal array
	PointList[0][0]=99;
	PointList[0][1]=99;
	PointList[0][2]=99;



	BOOST_REVERSE_FOREACH(Point3 p, PointList)
	{
		std::cout <<p<<std::endl;
	}

	return EXIT_SUCCESS;
}














