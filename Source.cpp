#include"Header.hpp"
#include <iostream>
#include<math.h>
namespace ks
{
	Trapeze::Trapeze(float a, float b, float h)
	{
		if (a <= 0)
		{
			m_a = 1;
			std::cout << "a negative" << std::endl;
		}
		else
		{
			m_a = a;
		}
		if (b <= 0)
		{
			m_b = 1;
			std::cout << "b negative" << std::endl;
		}
		else
		{
			m_b = b;
		}
		if (h <= 0)
		{
			m_h = 1;
			std::cout << "h negative" << std::endl;
		}
		else
		{
			m_h = h;
		}
		m_c = (sqrt(((m_a - m_b) / 2) * ((m_a - m_b) / 2) + m_h + m_h));

	}
	Trapeze::~Trapeze()
	{
	}
	float Trapeze::GetS()
	{
		return ((m_a + m_b) / 2) * m_h;
	}
	float Trapeze::GetP()
	{
		return m_a + m_b + 2 * (sqrt(((m_a - m_b) / 2) * ((m_a - m_b) / 2) + m_h * m_h));
	}
}
