#include <iostream>
#include <Windows.h>

class Figure
{
public:

	void get_sides(int a, int b, int c) {
		
		this->a = a, this->b = b, this->c = c;

	}

	void get_angle(int A, int B, int C) {

		this->A = A, this->B = B, this->C = C;

	}
	
	void print() {

		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;

	}

protected:

	int count = 0;

	int a, b, c, A, B, C;

};

class Triangle : public Figure
{
public:

	Triangle(int a, int b, int c, int A, int B, int C) {
		this->a = a, this->b = b, this->c = c, this->A = A, this->B = B, this->C = C;

	}

	void name() {
		std::cout << "Треугольник:\n";
	}

	void medod() {

		count = 3;
		get_sides(a, b, c);
		get_angle(A, B, C);
		print();

	}

protected:

	int a, b, c, A, B , C;

};

class Triangle_pr : public Triangle
{
public:

	Triangle_pr(int a, int b, int c, int A, int B, int C) : Triangle (a,b,c,A,B,C) {
	}

	void name() {
		std::cout << "Прямоугольный реугольник:\n";
	}

protected:

	int a, b, c, A, B, C;

};



class Quadrangle : public Figure
{
public:

	void medod() {

		count = 4;
	
	}

};

void print(Figure* figure) {
	figure->print();
}



int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle tri(10, 20, 30, 50, 60, 70);
	Triangle_pr tri_pr(30, 20, 30, 50, 60, 70);
	Quadrangle qu;

	tri.name();
	tri.medod();
	tri_pr.name();
	tri_pr.medod();

	//qu.medod();


}