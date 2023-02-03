// figures_2.cpp

/*
Реализаци¤ функций классов фигур первого задани¤
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
Вывод имени фигуры
*/
std::string jinx::Figure::get_figure_name()
{
	return this->figureName_;
}

/*

Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

*/
void jinx::Triangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';
	std::cout << "Стороны: а = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << '\n';
	std::cout << "Углы: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << std::endl;
}

/*

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

*/
void jinx::Quadrangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';
	std::cout << "Стороны: а = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << " d = " << this->side_d_ << '\n';
	std::cout << "Углы: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << " D = " << this->angle_D_ << std::endl;
}