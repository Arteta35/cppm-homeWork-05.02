#include <iostream>
#include <Windows.h>

class Figure
{
public:
	Figure() {};

	int get_sides() {
		name();
		std::cout << count << std::endl;
		return count;
	}

protected:

	int count = 0;

	void name() {
		if (count == 0) {
			std::cout << "Фигура: ";
		}
		else if (count == 3) {
			std::cout << "Треугольник: ";
		}
		else {
			std::cout << "Четырёхугольник: ";
		}
	}

};

class Triangle : public Figure
{
public:

	void medod() {

		count = 3;
		get_sides();

	}

protected:

	int a, b, c, A, B, C;

};



class Quadrangle : public Figure
{
public:

	void medod() {

		count = 4;
		get_sides();

	}

};


int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle tri;
	Quadrangle qu;

	std::cout << "Колличество сторон:" << std::endl;

	tri.get_sides();
	tri.medod();
	qu.medod();


}