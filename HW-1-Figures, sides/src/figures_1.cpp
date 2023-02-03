// figures_1.cpp

/*
Реализация функций классов фигур первого задания
*/

#include "figures_1.h"
#include <iostream>

/*
Метод вывода фигур в консоль
Формат: Фигура: 0
*/
void jinx::Figure::print_figure()
{
	std::cout << this->figureName_ << ": " << this->figureSides_;
}