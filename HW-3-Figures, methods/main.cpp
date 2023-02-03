// main.cpp

/*
  03.02.2023
  ���� 2, ������� 5
  ������ 3, ������. ������
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

	jinx::Figure figFigure("������");

	jinx::Triangle figTriangle("�����������", 10, 20, 30, 50, 60, 70);

	jinx::QuadTriangle figQuadTriangle("������������� �����������", 10, 20, 30, 50, 60);
	jinx::QuadTriangle figQuadTriangle_fixed("������������� ����������� - fixed", 10, 20, 30, 50, 40);

	jinx::EqualSidedTriangle figEqualSideTriangle("�������������� �����������", 10, 20, 50, 60);

	jinx::EqualSidedTriangle figEqualSideTriangle_fixed("�������������� ����������� - fixed", 10, 20, 50, 80);

	jinx::EqualizedTriangle figEqualizedTriangle("�������������� �����������", 30, 60);

	jinx::Quadrangle figQuadrangle("��������������", 10, 20, 30, 40, 50, 60, 70, 80);

	jinx::TwoSideSquare figTwoSideSquare("�������������", 10, 20);
	jinx::Square figSquare("�������", 20);
	jinx::AngledTwoSideSquare figAngleTwoSideSq("������������", 20, 30, 30, 40);
	jinx::AngledSquare figAngledSq("����", 30, 30, 40);

	// ---------------------------------------------------------------
	// Print results

	// ������
	ptr_Figure = &figFigure;
	print_info(ptr_Figure);
	std::cout << '\n' << '\n';

	// �����������
	ptr_Figure = &figTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ������������� �����������
	ptr_Figure = &figQuadTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ������������� ����������� - fixed
	ptr_Figure = &figQuadTriangle_fixed;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������������� �����������
	ptr_Figure = &figEqualSideTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������������� ����������� - fixed
	ptr_Figure = &figEqualSideTriangle_fixed;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������������� �����������
	ptr_Figure = &figEqualizedTriangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ��������������
	ptr_Figure = &figQuadrangle;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������������
	ptr_Figure = &figTwoSideSquare;
	print_info(ptr_Figure);
	std::cout << '\n';

	// �������
	ptr_Figure = &figSquare;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ������������
	ptr_Figure = &figAngleTwoSideSq;
	print_info(ptr_Figure);
	std::cout << '\n';

	// ����
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