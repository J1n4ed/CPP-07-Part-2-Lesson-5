// figures_2.cpp

/*
��������� ������� ������� ����� ������� ������
*/

#include "figures_2.h"
#include <iostream>

/*
vprint
*/
void jinx::Figure::print_figure()
{
	std::cout << this->figureName_;
}

/*
����� ����� ������
*/
std::string jinx::Figure::get_figure_name()
{
	return this->figureName_;
}

/*

�����������:
�������: a=10 b=20 c=30
����: A=50 B=60 C=70

*/
void jinx::Triangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';
	std::cout << "�������: � = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << '\n';
	std::cout << "����: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << std::endl;
}

/*

�������������:
�������: a=10 b=20 c=10 d=20
����: A=90 B=90 C=90 D=90

*/
void jinx::Quadrangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';
	std::cout << "�������: � = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << " d = " << this->side_d_ << '\n';
	std::cout << "����: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << " D = " << this->angle_D_ << std::endl;
}