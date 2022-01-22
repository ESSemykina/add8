#pragma once
namespace ks
{
	class Trapeze
	{
	public:
		Trapeze(float a, float b, float h);
		~Trapeze();
		float GetS();
		float GetP();
	private:
		float m_a;
		float m_b;
		float m_h;
		float m_c;
	};
}