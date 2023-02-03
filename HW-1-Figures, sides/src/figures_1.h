// figures_1.h

/*
������������ ���� ������� ������� �������
*/

#ifndef FIGURES1H
#define FIGURES1H

#include <string>

namespace jinx
{
	/*
	������� ����� ������
	*/
	class Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //		

		/*
		����� ������ ����� � �������
		������: ������: 0
		*/
		void print_figure();

		// ������������ ------------------------------------------- //

		/*
		����������� �� ���������
		��� = ������
		������ = 0
		*/
		Figure()
		{
			figureSides_ = 0;
			figureName_ = "������";
		}

		/*
		����������� � �����������
		�� ���� int ���������� ������
		� string �������� ������
		*/
		Figure(int figureSides, std::string figureName)
		{
			figureName_ = figureName;
			figureSides_ = figureSides;
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:
		
		int figureSides_;				// ���������� ����� ������
		std::string figureName_;		// �������� ������

	}; // END OF class Figure

	/*
	����� ������������ ����������� �� ������ ������
	*/
	class Triangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //


		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� ��� ������������
		*/
		Triangle() : Figure(3, "�����������")
		{
			// ----
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:



	}; // END OF class Triangle


	/*
	����� ������������ ����������� �� ������ ������
	*/
	class Quadrangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC ������ ------------------------------------------ //


		// ������������ ------------------------------------------- //

		/*
		����������� �� ��������� ��� ������������
		*/
		Quadrangle() : Figure(4, "�������������")
		{
			// ----
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class Quadrangle


} // END OF JINX NAMESPACE


#endif // FIGURES1H