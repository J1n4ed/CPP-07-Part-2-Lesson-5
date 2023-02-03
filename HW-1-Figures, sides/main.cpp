// main.cpp

/*
  03.02.2023
  Тема 2, Занятие 5
  Работа 1, Фигуры. Количество сторон
  CPP-07
  @j1n4ed
*/

#include "src/figures_1.h"
#include <iostream>
#include <Windows.h>

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	jinx::Figure defaultFigure;
	jinx::Triangle figTriangle;
	jinx::Quadrangle figQuadrangle;

	std::cout << "Количество сторон: \n";

	defaultFigure.print_figure(); 
	std::cout << '\n';

	figTriangle.print_figure();
	std::cout << '\n';

	figQuadrangle.print_figure();
	std::cout << '\n';

	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}