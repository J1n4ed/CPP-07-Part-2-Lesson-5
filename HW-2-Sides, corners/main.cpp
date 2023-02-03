// main.cpp

/*
  03.02.2023
  Тема 2, Занятие 5
  Работа 2, Фигуры. Стороны и углы
  CPP-07
  @j1n4ed
*/

#include "src/figures_2.h"
#include <iostream>
#include <Windows.h>

void print_info(jinx::Figure*);

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// pointers

	jinx::Triangle* ptr_Triangle;
	jinx::Quadrangle* ptr_Quadrangle;
	jinx::Figure* ptr_Figure;

	// --------------------------------------------------------------
	// make objects

	jinx::Triangle figTriangle("Треугольник", 10, 20, 30, 50, 60, 70);

	jinx::QuadTriangle figQuadTriangle("Прямоугольный треугольник", 10, 20, 30, 50, 60);
	jinx::EqualSidedTriangle figEqualSideTriangle("Равнобедренный треугольник", 10, 20, 50, 70);
	jinx::EqualizedTriangle figEqualizedTriangle("Равносторонний треугольник", 30, 60);

	jinx::Quadrangle figQuadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);

	jinx::TwoSideSquare figTwoSideSquare("Прямоугольник", 10, 20);
	jinx::Square figSquare("Квадрат", 20);
	jinx::AngledTwoSideSquare figAngleTwoSideSq("Параллепипед", 20, 30, 30, 40);
	jinx::AngledSquare figAngledSq("Ромб", 30, 30, 40);

	// ---------------------------------------------------------------
	// Print results

	// треугольник
	ptr_Figure = &figTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// прямоугольный треугольник
	ptr_Figure = &figQuadTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// равнобедренный треугольник
	ptr_Figure = &figEqualSideTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// равносторонний треугольник
	ptr_Figure = &figEqualizedTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// четырёхугольник
	ptr_Figure = &figQuadrangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// прямоугольный
	ptr_Figure = &figTwoSideSquare;
	print_info(ptr_Figure);
	std::cout << '\n';

	// квадрат
	ptr_Figure = &figSquare;
	print_info(ptr_Figure);
	std::cout << '\n';

	// параллепипед
	ptr_Figure = &figAngleTwoSideSq;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ромб
	ptr_Figure = &figAngledSq;
	print_info(ptr_Figure);
	std::cout << '\n';

	// clear and exit

	std::cout << std::endl;
	system("pause");
	return EXIT_SUCCESS;
}

void print_info(jinx::Figure* Figure)
{
	Figure->print_figure();
}