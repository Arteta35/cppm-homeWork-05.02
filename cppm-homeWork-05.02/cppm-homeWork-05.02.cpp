#include <iostream>
#include <Windows.h>

class Figure_Triangle
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

	int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;

};

class Triangle : public Figure_Triangle
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

	int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;

};

class Right_triangle : public Triangle
{
public:

	Right_triangle(int a, int b, int c, int A, int B) : Triangle (a,b,c,A,B,C=90) {
	}

	void name() {
		std::cout << "Прямоугольный треугольник:\n";
	}

protected:

	int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;

};

class Isosceles_triangle : public Triangle
{
public:

	Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, c = a, A, B, C=A) {
	}

	void name() {
		std::cout << "Равнобедренный треугольник:\n";
	}

protected:

	int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;

};

class Equilateral_triangle : public Triangle
{
public:

	Equilateral_triangle (int a) : Triangle(a, b = a, c = a, A = 60, B = 60, C = 60) {
	}

	void name() {
		std::cout << "Равносторонний треугольник:\n";
	}

protected:

	int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;

};

class Figure_Quadrilateral
{
public:

	void get_sides(int a, int b, int c, int d) {

		this->a = a, this->b = b, this->c = c, this->d = d;

	}

	void get_angle(int A, int B, int C, int D) {

		this->A = A, this->B = B, this->C = C, this->D = D;

	}

	void print() {

		std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;

	}

protected:

	int count = 0;

	int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;

};

class Quadrilateral : public Figure_Quadrilateral
{
public:

	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) {

		this->a = a, this->b = b, this->c = c, this->d = d, this->A = A, this->B = B, this->C = C, this->D = D;
	}

	void name() {
		std::cout << "Четырёхугольник:\n";
	}

	void medod() {

		count = 4;
		get_sides(a, b, c, d);
		get_angle(A, B, C, D);
		print();

	}

protected:

	int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;

};

class _Rectangle : public Quadrilateral
{
public:

	_Rectangle(int a, int b) : Quadrilateral(a, b, c = a, d = b, A = 90, B = 90, C = 90, D= 90) {
	}

	void name() {
		std::cout << "Прямоугольник:\n";
	}


protected:

	int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;

};

class Square : public Quadrilateral
{
public:

	Square(int a) : Quadrilateral(a, b = a, c = a, d = a, A = 90, B = 90, C = 90, D = 90) {
	}

	void name() {
		std::cout << "Квадрат:\n";
	}


protected:

	int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;

};

class Parallelogram : public Quadrilateral
{
public:

	Parallelogram(int a, int b, int A, int B) : Quadrilateral(a, b, c = a, d = b, A, B, C = A, D = B) {
	}

	void name() {
		std::cout << "Параллелограмм:\n";
	}


protected:

	int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;

};

class Rhomb : public Quadrilateral
{
public:

	Rhomb(int a, int A, int B) : Quadrilateral(a, b = a, c = a, d = a, A, B, C = A, D = B) {
	}

	void name() {
		std::cout << "Ромб:\n";
	}


protected:

	int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;

};

void print(Figure_Triangle* figure) {
	figure->print();
}


int main()
{

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle tri(10, 20, 30, 50, 60, 70);
	Right_triangle right_tri(30, 20, 30, 50, 60);
	Isosceles_triangle isosceles_tri (30, 20, 50, 60);
	Equilateral_triangle equilateral_tri(40);

	Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80);
	_Rectangle req(10,20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

	tri.name();
	tri.medod();
	right_tri.name();
	right_tri.medod();
	isosceles_tri.name();
	isosceles_tri.medod();
	equilateral_tri.name();
	equilateral_tri.medod();

	quad.name();
	quad.medod();
	req.name();
	req.medod();
	square.name();
	square.medod();
	parallelogram.name();
	parallelogram.medod();
	rhomb.name();
	rhomb.medod();

}