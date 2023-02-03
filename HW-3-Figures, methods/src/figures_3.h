// figures_3.h

/*
Заголовочный файл классов второго задания
*/

#ifndef FIGURES3H
#define FIGURES3H

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
			numOfSides_ = 0;
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		/*
		Возврат количества сторон
		*/
		int get_numOfSides();

		/*
		Установить количество сторон
		*/
		void set_numOfSides(int);

		/*
		Виртуальный метод проверки валидности фигуры
		для класса Figure
		*/
		virtual bool check_if_valid();

		/*
		Вывод имени фигуры
		*/
		std::string get_figure_name();

		// PRIVATE AREA ------------------------------------------- //
	private:

		std::string figureName_;		// название фигуры
		int numOfSides_;
		

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

			this->set_numOfSides(3);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// Геттеры

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
		Виртуальный метод проверки валидности фигуры
		для класса Triangle
		*/
		bool check_if_valid() override;

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
			this->set_numOfSides(3);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		Виртуальный метод проверки валидности фигуры
		для класса QuadTriangle
		*/
		bool check_if_valid() override;

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

		EqualSidedTriangle(std::string figureName, int side_a, int side_b, int angle_A, int angle_B) : Triangle(figureName, side_a, side_b, side_a, angle_A, angle_B, angle_A)
		{
			this->set_numOfSides(3);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		Виртуальный метод проверки валидности фигуры
		для класса EqualSidedTriangle
		*/
		bool check_if_valid() override;

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
			this->set_numOfSides(3);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		Виртуальный метод проверки валидности фигуры
		для класса EqualizedTriangle
		*/
		bool check_if_valid() override;

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

			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// Геттеры

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
		Виртуальный метод проверки валидности фигуры
		для класса Quadrangle
		*/
		bool check_if_valid() override;

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
			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		Виртуальный метод проверки валидности фигуры
		для класса TwoSideSquare
		*/
		bool check_if_valid() override;

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
			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		Виртуальный метод проверки валидности фигуры
		для класса Square
		*/
		bool check_if_valid() override;

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
			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		Виртуальный метод проверки валидности фигуры
		для класса AngledTwoSideSquare
		*/
		bool check_if_valid() override;

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
			this->set_numOfSides(4);
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:

		/*
		Виртуальный метод проверки валидности фигуры
		для класса AngledSquare
		*/
		bool check_if_valid() override;

	}; // END OF class AngledTwoSideSquare // ---------------------------------------------------------------------------------------------------------------- //

} // END OF JINX NAMESPACE


#endif // FIGURES1H