// figures_1.h

/*
Заголовочный файл классов первого задания
*/

#ifndef FIGURES1H
#define FIGURES1H

#include <string>

namespace jinx
{
	/*
	Базовый класс фигуры
	*/
	class Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //		

		/*
		Метод вывода фигур в консоль
		Формат: Фигура: 0
		*/
		void print_figure();

		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию
		Имя = Фигура
		Сторон = 0
		*/
		Figure()
		{
			figureSides_ = 0;
			figureName_ = "Фигура";
		}

		/*
		Конструктор с параметрами
		На вход int количество сторон
		и string название фигуры
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
		
		int figureSides_;				// количество углов фигуры
		std::string figureName_;		// название фигуры

	}; // END OF class Figure

	/*
	Класс Треугольника производный из класса Фигуры
	*/
	class Triangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //


		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию для треугольника
		*/
		Triangle() : Figure(3, "Треугольник")
		{
			// ----
		}

		// PROTECTED AREA ----------------------------------------- //
	protected:

		// PRIVATE AREA ------------------------------------------- //
	private:



	}; // END OF class Triangle


	/*
	Класс Треугольника производный из класса Фигуры
	*/
	class Quadrangle : public Figure
	{
		// PUBLIC AREA -------------------------------------------- //
	public:

		// PUBLIC Методы ------------------------------------------ //


		// КОНСТРУКТОРЫ ------------------------------------------- //

		/*
		Конструктор по умолчанию для треугольника
		*/
		Quadrangle() : Figure(4, "Прямоугольник")
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