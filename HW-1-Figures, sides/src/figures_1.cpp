// figures_1.cpp

/*
���������� ������� ������� ����� ������� �������
*/

#include "figures_1.h"
#include <iostream>

/*
����� ������ ����� � �������
������: ������: 0
*/
void jinx::Figure::print_figure()
{
	std::cout << this->figureName_ << ": " << this->figureSides_;
}