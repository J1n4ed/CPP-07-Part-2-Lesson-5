// figures_3.cpp

/*
��������� ������� ������� ����� ������� ������
*/

#include "figures_3.h"
#include <iostream>

#define RET_SUCCESS true
#define RET_FAILURE false

/*
������� ���������� ������
*/
int jinx::Figure::get_numOfSides()
{
	return this->numOfSides_;
}

/*
���������� ���������� ������
*/
void jinx::Figure::set_numOfSides(int numOfSides)
{
	this->numOfSides_ = numOfSides;
}

// ������� Triangle

int jinx::Triangle::get_side_a()
{
	return side_a_;
}

int jinx::Triangle::get_side_b()
{
	return side_b_;
}

int jinx::Triangle::get_side_c()
{
	return side_c_;
}

int jinx::Triangle::get_angle_A()
{
	return angle_A_;
}

int jinx::Triangle::get_angle_B()
{
	return angle_B_;
}

int jinx::Triangle::get_angle_C()
{
	return angle_C_;
}

// ������� Quadrangle

int jinx::Quadrangle::get_side_a()
{
	return side_a_;
}

int jinx::Quadrangle::get_side_b()
{
	return side_b_;
}

int jinx::Quadrangle::get_side_c()
{
	return side_c_;
}

int jinx::Quadrangle::get_side_d()
{
	return side_d_;
}

int jinx::Quadrangle::get_angle_A()
{
	return angle_A_;
}

int jinx::Quadrangle::get_angle_B()
{
	return angle_B_;
}

int jinx::Quadrangle::get_angle_C()
{
	return angle_C_;
}

int jinx::Quadrangle::get_angle_D() 
{
	return angle_D_;
}

// OVERRIDES ----------------------------------------------------------------------------------------

/*
����������� ����� �������� ���������� ������
for Figure class
*/
bool jinx::Figure::check_if_valid()
{
	return RET_SUCCESS;
}

/*
����������� ����� �������� ���������� ������
��� ������ Triangle
*/
bool jinx::Triangle::check_if_valid()
{
	if ( ( this->get_angle_A() + this->get_angle_B() + this->get_angle_C() ) == 180 )
	{
		return RET_SUCCESS; 
	}
	else
	{
		return RET_FAILURE;
	}
}

/*
����������� ����� �������� ���������� ������
��� ������ QuadTriangle
*/
bool jinx::QuadTriangle::check_if_valid()
{
	if ( ( this->get_angle_A() + this->get_angle_B() + this->get_angle_C() ) == 180 )
	{
		if ( this->get_angle_C() == 90 )
		{
			return RET_SUCCESS;
		}
		return RET_FAILURE;
	}
	else
	{
		return RET_FAILURE;
	}
}

/*
����������� ����� �������� ���������� ������
��� ������ EqualSidedTriangle
*/
bool jinx::EqualSidedTriangle::check_if_valid()
{
	if (( this->get_angle_A() + this->get_angle_B() + this->get_angle_C()) == 180 )		
	{
		if ( ( this->get_side_a() == this->get_side_c() ) && ( this->get_angle_A() == this->get_angle_C() ) )
		{
			return RET_SUCCESS;
		}
		return RET_FAILURE;
	}
	else
	{
		return RET_FAILURE;
	}
}

/*
����������� ����� �������� ���������� ������
��� ������ EqualizedTriangle
*/
bool jinx::EqualizedTriangle::check_if_valid()
{
	if ( ( this->get_angle_A() == 60 ) && ( this->get_angle_B() == 60 ) && ( this->get_angle_C() == 60 ) )		
	{
		if ( ( this->get_side_a() == this->get_side_b() ) && ( this->get_side_a() == this->get_side_c() ) )
		{
			return RET_SUCCESS;
		}
		return RET_FAILURE;
	}
	else
	{
		return RET_FAILURE;
	}
}

/*
����������� ����� �������� ���������� ������
��� ������ Quadrangle
*/
bool jinx::Quadrangle::check_if_valid()
{
	if ( ( this->get_angle_A() + this->get_angle_B() + this->get_angle_C() + this->get_angle_D() ) == 360 )
	{
		return RET_SUCCESS; 
	}
	else
	{
		return RET_FAILURE;
	}
}

/*
����������� ����� �������� ���������� ������
��� ������ TwoSideSquare
*/
bool jinx::TwoSideSquare::check_if_valid()
{
	if ( ( this->get_angle_A() + this->get_angle_B() + this->get_angle_C() + this->get_angle_D() ) == 360 )
	{
		if ( ( this->get_side_a() == this->get_side_c() ) && ( this->get_side_b() == this->get_side_d() ) )
		{
			if ( ( this->get_angle_A() == 90 ) && ( this->get_angle_B() == 90 ) && ( this->get_angle_C() == 90 ) && ( this->get_angle_D() == 90 ) )
			{
				return RET_SUCCESS;
			}
			return RET_FAILURE;
		}
		return RET_FAILURE;
	}
	else
	{
		return RET_FAILURE;
	}
}

/*
����������� ����� �������� ���������� ������
��� ������ Square
*/
bool jinx::Square::check_if_valid()
{
	if ( ( this->get_angle_A() + this->get_angle_B() + this->get_angle_C() + this->get_angle_D() ) == 360)
	{
		if ( (this->get_angle_A() == 90) && (this->get_angle_B() == 90) && (this->get_angle_C() == 90) && (this->get_angle_D() == 90) )
		{
			if ( (this->get_side_a() == this->get_side_b()) && (this->get_side_c() == this->get_side_d()) && ( this->get_side_a() == this->get_side_c() ) )
			{
				return RET_SUCCESS;
			}

			return RET_FAILURE;
		}

		return RET_FAILURE;
	}
	else
	{
		return RET_FAILURE;
	}
}

/*
����������� ����� �������� ���������� ������
��� ������ AngledTwoSideSquare
*/
bool jinx::AngledTwoSideSquare::check_if_valid()
{
	if ( (this->get_angle_A() + this->get_angle_B() + this->get_angle_C() + this->get_angle_D() ) - 360)
	{
		if ( ( this->get_side_a() == this->get_side_c() ) && ( this->get_side_b() == this->get_side_d() ) )
		{
			if ( ( this->get_angle_A() == this->get_angle_C() ) && ( this->get_angle_B() == this->get_angle_D() ) )
			{
				return RET_FAILURE;
			}
			return RET_FAILURE;
		}
		return RET_FAILURE;
	}
	else // if 0
	{
		return RET_SUCCESS;
	}
}

/*
����������� ����� �������� ���������� ������
��� ������ AngledSquare
*/
bool jinx::AngledSquare::check_if_valid()
{
	if ((this->get_angle_A() + this->get_angle_B() + this->get_angle_C() + this->get_angle_D()) == 360)
	{
		if ( (this->get_side_a() == this->get_side_b() ) && ( this->get_side_c() == this->get_side_d() ) && (this->get_side_a() == this->get_side_c()))
		{
			if (this->get_angle_A() == this->get_angle_C() && this->get_angle_B() == this->get_angle_D())
			{
				return RET_SUCCESS;
			}
			return RET_FAILURE;
		}
		return RET_FAILURE;
	}
	else
	{
		return RET_FAILURE;
	}
}

// END OF OVERRIDES ------------------------------------------------------------------------------------------------

/*
����� ����� ������
*/
std::string jinx::Figure::get_figure_name()
{
	return this->figureName_;
}

/*
��� ������

������:
����������
���������� ������: 0

*/
void jinx::Figure::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';

	switch (this->check_if_valid())
	{
	case true:
		std::cout << "����������";
		break;
	case false:
		std::cout << "������������";
		break;
	}

	std::cout << '\n';

	std::cout << "���������� ������: " << this->get_numOfSides();
}

/*
�����������:
����������
���������� ������: 3
�������: a=10 b=20 c=30
����: A=50 B=60 C=70
*/
void jinx::Triangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';

	switch (this->check_if_valid())
	{
	case true:
		std::cout << "����������";
		break;
	case false:
		std::cout << "������������";
		break;
	}

	std::cout << '\n';

	std::cout << "���������� ������: " << this->get_numOfSides() << '\n';
	std::cout << "�������: � = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << '\n';
	std::cout << "����: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << std::endl;
}

/*
��������������:
������������
���������� ������: 4
�������: a=10 b=20 c=30 d=40
����: A=50 B=60 C=70 D=80
*/
void jinx::Quadrangle::print_figure()
{
	std::cout << this->get_figure_name() << ':' << '\n';

	switch (this->check_if_valid())
	{
	case true:
		std::cout << "����������";
		break;
	case false:
		std::cout << "������������";
		break;
	default:
		std::cout << "debug: default switch reached!";
		break;
	}

	std::cout << '\n';

	std::cout << "���������� ������: " << this->get_numOfSides() << '\n';
	std::cout << "�������: � = " << this->side_a_ << " b = " << this->side_b_ << " c = " << this->side_c_ << " d = " << this->side_d_ << '\n';
	std::cout << "����: A = " << this->angle_A_ << " B = " << this->angle_B_ << " C = " << this->angle_C_ << " D = " << this->angle_D_ << std::endl;
}