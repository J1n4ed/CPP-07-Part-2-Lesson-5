// figures_2.h

/*
Заголовочный файл классов второго задания
*/

#ifndef FIGURES2H
#define FIGURES2H

#include <string>

namespace jinx
{
	/*
	Базовый класс фигуры
	*/
	class Figure // ---------------------------------------------------------------------------------------------------------------- //
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		/*
		vprint
		*/
		virtual void print_figure();

		/*
		Вывод имени фигуры
		*/
		std::string get_figure_name();

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию
		Удалён
		*/
		Figure() = delete;

		/*
		Конструктор с параметрами
		На вход int количество сторон
		и string название фигуры
		*/
		Figure(std::string figureName)
		{
			figureName_ = figureName;
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		std::string figureName_;		// название фигуры

	}; // END OF class Figure  // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Любой треуголник
	*/
	class Triangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //

		void print_figure() override;

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
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
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_;
		int angle_A_, angle_B_, angle_C_;

	}; // END OF class Triangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Прямоугольный треугольник
	*/
	class QuadTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		QuadTriangle() = delete;

		QuadTriangle(std::string figureName, int side_a, int side_b, int side_c, int angle_A, int angle_B) : Triangle(figureName, side_a, side_b, side_c, angle_A, angle_B, 90)
		{
			
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class QuadTriangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Равнобедренный треугольник
	*/
	class EqualSidedTriangle : public Triangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		EqualSidedTriangle() = delete;

		EqualSidedTriangle(std::string figureName, int side_a, int side_c, int angle_A, int angle_C) : Triangle(figureName, side_a, side_a, side_c, angle_A, angle_A, angle_C)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualSidedTriangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Равносторонний треугольник
	*/
	class EqualizedTriangle : public EqualSidedTriangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		EqualizedTriangle() = delete;

		EqualizedTriangle(std::string figureName, int side_a, int angle_A) : EqualSidedTriangle(figureName, side_a, side_a, angle_A, angle_A)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class EqualizedTriangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Любой четырёхугольник
	*/
	class Quadrangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		void print_figure() override;

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
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
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		int side_a_, side_b_, side_c_, side_d_;
		int angle_A_, angle_B_, angle_C_, angle_D_;

	}; // END OF class Quadrangle // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Прямоугольник
	*/
	class TwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		TwoSideSquare() = delete;

		TwoSideSquare(std::string figureName, int side_a, int side_b) : Quadrangle(figureName, side_a, side_b, side_a, side_b, 90, 90, 90, 90)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class TwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Квадрат
	*/
	class Square : public TwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		Square() = delete;

		Square(std::string figureName, int side_a) : TwoSideSquare(figureName, side_a, side_a)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class Square // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Параллепипед
	*/
	class AngledTwoSideSquare : public Quadrangle
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		AngledTwoSideSquare() = delete;

		AngledTwoSideSquare(std::string figureName, int side_a, int side_b, int angle_A, int angle_B) : Quadrangle(figureName, side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //

	/*
	Ромб
	*/
	class AngledSquare : public AngledTwoSideSquare
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //	

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию удалён
		*/
		AngledSquare() = delete;

		AngledSquare(std::string figureName, int side_a, int angle_A, int angle_B) : AngledTwoSideSquare(figureName, side_a, side_a, angle_A, angle_B)
		{

		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //

} // END OF JINX NAMESPACE


#endif // FIGURES1H