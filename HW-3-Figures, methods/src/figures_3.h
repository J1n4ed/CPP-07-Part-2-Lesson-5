// figures_3.h

/*
������������ ���� ������� ������� �������
*/

#ifndef FIGURES3H
#define FIGURES3H

#include <string>

namespace jinx
{
	/*
	������� ����� ������
	*/
	class Figure // ---------------------------------------------------------------------------------------------------------------- //
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		/*
		vprint
		*/
		virtual void print_figure();		

		// ������������ ------------------------------------------- //

		/*
		����������� �� ���������
		�����
		*/
		Figure() = delete;

		/*
		����������� � �����������
		�� ���� int ���������� ������
		� string �������� ������
		*/
		Figure(std::string figureName)
		{
			figureName_ = figureName;
			numOfSides_ = 0;
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		/*
		������� ���������� ������
		*/
		int get_numOfSides();

		/*
		���������� ���������� ������
		*/
		void set_numOfSides(int);

		/*
		����������� ����� �������� ���������� ������
		��� ������ Figure
		*/
		virtual bool check_if_valid();

		/*
		����� ����� ������
		*/
		std::string get_figure_name();

		// PRIVATE AREA ------------------------------------------- //
	private:

		std::string figureName_;		// �������� ������
		int numOfSides_;
		

	}; // END OF class Figure  // ---------------------------------------------------------------------------------------------------------------- //

	/*
	����� ����������
	*/
	class Triangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //

		void print_figure() override;		

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		Triangle() = delete;

		Triangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B, int angle_C) : Figure(figureName)
		{
			side_a_ = side_a;
			side_b_ = side_b;
			side_c_ = side_c;

			angle_A_ = angle_A;
			angle_B_ = angle_B;
			angle_C_ = angle_C;

			this->set_numOfSides(3);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// �������

		int get_side_a();
		int get_side_b();
		int get_side_c();

		int get_angle_A();
		int get_angle_B();
		int get_angle_C();

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_;
		int angle_A_, angle_B_, angle_C_;

		/*
		����������� ����� �������� ���������� ������
		��� ������ Triangle
		*/
		bool check_if_valid() override;

	}; // END OF class Triangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	������������� �����������
	*/
	class QuadTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //			

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		QuadTriangle() = delete;

		QuadTriangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle(figureName, side_a, side_b, side_c, angle_A, angle_B, 90)
		{
			this->set_numOfSides(3);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		����������� ����� �������� ���������� ������
		��� ������ QuadTriangle
		*/
		bool check_if_valid() override;

	}; // END OF class QuadTriangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	�������������� �����������
	*/
	class EqualSidedTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		EqualSidedTriangle() = delete;

		EqualSidedTriangle(std::string figureName, int side_a, int side_b, int angle_A, int angle_B) : Triangle(figureName, side_a, side_b, side_a, angle_A, angle_B, angle_A)
		{
			this->set_numOfSides(3);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		����������� ����� �������� ���������� ������
		��� ������ EqualSidedTriangle
		*/
		bool check_if_valid() override;

	}; // END OF class EqualSidedTriangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	�������������� �����������
	*/
	class EqualizedTriangle : public EqualSidedTriangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		EqualizedTriangle() = delete;

		EqualizedTriangle(std::string figureName, int side_a, int angle_A) : EqualSidedTriangle(figureName, side_a, side_a, angle_A, angle_A)
		{
			this->set_numOfSides(3);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		����������� ����� �������� ���������� ������
		��� ������ EqualizedTriangle
		*/
		bool check_if_valid() override;

	}; // END OF class EqualizedTriangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	����� ��������������
	*/
	class Quadrangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		void print_figure() override;

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		Quadrangle() = delete;

		Quadrangle(std::string figureName, int side_a, int side_b, int side_c, int side_d, int angle_A, int angle_B, int angle_C, int angle_D) : Figure(figureName)
		{
			side_a_ = side_a;
			side_b_ = side_b;
			side_c_ = side_c;
			side_d_ = side_d;

			angle_A_ = angle_A;
			angle_B_ = angle_B;
			angle_C_ = angle_C;
			angle_D_ = angle_D;

			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// �������

		int get_side_a();
		int get_side_b();
		int get_side_c();
		int get_side_d();

		int get_angle_A();
		int get_angle_B();
		int get_angle_C();
		int get_angle_D();

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_, side_d_;
		int angle_A_, angle_B_, angle_C_, angle_D_;

		/*
		����������� ����� �������� ���������� ������
		��� ������ Quadrangle
		*/
		bool check_if_valid() override;

	}; // END OF class Quadrangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	�������������
	*/
	class TwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		TwoSideSquare() = delete;

		TwoSideSquare(std::string figureName, int side_a, int side_b) : Quadrangle(figureName, side_a, side_b, side_a, side_b, 90, 90, 90, 90)
		{
			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		����������� ����� �������� ���������� ������
		��� ������ TwoSideSquare
		*/
		bool check_if_valid() override;

	}; // END OF class TwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //

	/*
	�������
	*/
	class Square : public TwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		Square() = delete;

		Square(std::string figureName, int side_a) : TwoSideSquare(figureName, side_a, side_a)
		{
			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		����������� ����� �������� ���������� ������
		��� ������ Square
		*/
		bool check_if_valid() override;

	}; // END OF class Square // ---------------------------------------------------------------------------------------------------------------- //

	/*
	������������
	*/
	class AngledTwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		AngledTwoSideSquare() = delete;

		AngledTwoSideSquare(std::string figureName, int side_a, int side_b, int angle_A, int angle_B) : Quadrangle(figureName, side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B)
		{
			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		����������� ����� �������� ���������� ������
		��� ������ AngledTwoSideSquare
		*/
		bool check_if_valid() override;

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //

	/*
	����
	*/
	class AngledSquare : public AngledTwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //	

		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� �����
		*/
		AngledSquare() = delete;

		AngledSquare(std::string figureName, int side_a, int angle_A, int angle_B) : AngledTwoSideSquare(figureName, side_a, side_a, angle_A, angle_B)
		{
			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		����������� ����� �������� ���������� ������
		��� ������ AngledSquare
		*/
		bool check_if_valid() override;

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //

} // END OF JINX NAMESPACE


#endif // FIGURES1H