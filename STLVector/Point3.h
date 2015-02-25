#ifndef __POINT3_H__
#define __POONT3_H__
#include <iostream>
#include <cassert>

class Point3
{

public :

	friend std::ostream& operator<<(
																	std::ostream& _output,
																	const Point3& _s
																 )
	{
	return _output<<"["<<_s.m_x<<","<<_s.m_y<<","<<_s.m_z<<"]";
	}

	inline Point3(float _x, float _y, float _z): m_x(_x),m_y(_y),m_z(_z){;}

	inline float& operator[](
														const int& _i
													)
	{
		assert(_i >=0 || _i<=3);
		return (&m_x)[_i];
	}
	void Print()
	{
	 std::cout<<"X is "<<m_x<<"\n";
	}

	private :
		float m_x;
		float m_y;
		float m_z;


};

#endif
