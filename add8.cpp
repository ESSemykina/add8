/*8
Создайте класс, описывающий равнобедренную трапецию. Найдите ее периметр и площадь*/
#include<iostream>
#include <vector>
#include "Header.hpp"
int main()
{
	std::vector<ks::Trapeze>trapeze;
	// Допустимый случай
	float a1 = 9;
	float b1 = 7;
	float h1 = 8;
	trapeze.push_back(ks::Trapeze(a1, b1, h1));
	std::cout << "P= " << trapeze[0].GetP() << std::endl;
	std::cout << "S= " << trapeze[0].GetS() << std::endl;
	// Недопустимый случай
	float a2 = -9;
	float b2 = -7;
	float h2 = -8;
	trapeze.push_back(ks::Trapeze(a2, b2, h2));
	std::cout << "P= " << trapeze[1].GetP() << std::endl;
	std::cout << "S= " << trapeze[1].GetS() << std::endl;
}