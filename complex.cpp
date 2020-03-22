#include "complex.h"
#include <math.h>

void complex::constructor() {
	//constructor fara parametrii
	a = 0;
	b = 0;
}

void complex::constructor(double a_value, double b_value) {
	//constructor cu parametrii
	a = a_value;
	b = b_value;
}

double complex::get_a() const {
	// returneaza partea reala
	return a;
}

double complex::get_b() const {
	// returneaza partea imaginara
	return b;
}

void complex::set_a(double a_value) {
	// ocuparea partii reale
	// param : a_value
	a = a_value;
}

void complex::set_b(double b_value) {
	// ocuparea partii imaginare
	// param : b_value
	b = b_value;
}

//arithmetic "+"
complex complex::add(complex other) {
	// returneaza suma a doua numere complexe
	complex auxiliar;

	auxiliar.set_a(this->get_a() + other.get_a());
	auxiliar.set_b(this->get_b() + other.get_b());

	return auxiliar;
}

//arithmetic "*"
complex complex::mul(complex other) {
	// returneaza inmultirea a doua numere complexe
	complex auxiliar;

	auxiliar.set_a(this->get_a() * other.get_a() - this->get_b() * other.get_b());
	auxiliar.set_b(this->get_b() * other.get_b() + this->get_a() * other.get_b());

	return auxiliar;
}

//arithmetic "/"
complex complex::quot(complex other) {
	// returneaza impartirea a doua numere complexe
	complex auxiliar;
	double div = this->get_b() * this->get_b() + other.get_b() * other.get_b();
	auxiliar.set_a(
		(this->get_a() * other.get_a() + this->get_b() * other.get_b()) / div);
	auxiliar.set_b(
		(this->get_b() * other.get_b() - this->get_a() * other.get_b()) / div);
	return auxiliar;
}

//absoluten Betrag
double complex::abs() {
	// returneaza modulul unui numar complex
	double result;

	result =
		sqrt(this->get_a() * this->get_a() + this->get_b() * this->get_b());

	return result;
}