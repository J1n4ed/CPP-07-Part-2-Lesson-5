// main.cpp

/*
  03.02.2023
  Тема 2, Занятие 5
  Работа 3, Фигуры. Методы
  CPP-07
  @j1n4ed
*/

#include "src/figures_3.h"
#include <iostream>
#include <Windows.h>

void print_info(jinx::Figure*);

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// pointer	
	jinx::Figure* ptr_Figure;

	// --------------------------------------------------------------
	// make objects

	jinx::Figure figFigure("Фигура");

	jinx::Triangle figTriangle("Треугольник", 10, 20, 30, 50, 60, 70);

	jinx::QuadTriangle figQuadTriangle("Прямоугольный треугольник", 10, 20, 30, 50, 60);
	jinx::QuadTriangle figQuadTriangle_fixed("Прямоугольный треугольник - fixed", 10, 20, 30, 50, 40);

	jinx::EqualSidedTriangle figEqualSideTriangle("Равнобедренный треугольник", 10, 20, 50, 60);

	jinx::EqualSidedTriangle figEqualSideTriangle_fixed("Равнобедренный треугольник - fixed", 10, 20, 50, 80);

	jinx::EqualizedTriangle figEqualizedTriangle("Равносторонний треугольник", 30, 60);

	jinx::Quadrangle figQuadrangle("Четырёхугольник", 10, 20, 30, 40, 50, 60, 70, 80);

	jinx::TwoSideSquare figTwoSideSquare("Прямоугольник", 10, 20);
	jinx::Square figSquare("Квадрат", 20);
	jinx::AngledTwoSideSquare figAngleTwoSideSq("Параллепипед", 20, 30, 30, 40);
	jinx::AngledSquare figAngledSq("Ромб", 30, 30, 40);

	// ---------------------------------------------------------------
	// Print results

	// фигура
	ptr_Figure = &figFigure;
	print_info(ptr_Figure);
	std::cout << '\n' << '\n';

	// треугольник
	ptr_Figure = &figTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// прямоугольный треугольник
	ptr_Figure = &figQuadTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// прямоугольный треугольник - fixed
	ptr_Figure = &figQuadTriangle_fixed;
	print_info(ptr_Figure);
	std::cout << '\n';

	// равнобедренный треугольник
	ptr_Figure = &figEqualSideTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// равнобедренный треугольник - fixed
	ptr_Figure = &figEqualSideTriangle_fixed;
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