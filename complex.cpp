#include "complex.h"
#include <math.h>

complex::complex() {
	//constructor fara parametri
	a = 0;
	b = 0;
}

complex::complex(double a_value, double b_value) {
	//constructor cu parametri
	a = a_value;
	b = b_value;
}

complex::~complex(){
	//destructor
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

complex::complexa(double real, double imaginar)
//constructor
{
	a = real;
	b = imaginar;
}

double complex::getreal() const
//returns the real part of the number
{
	return a;
}

double complex::getimg() const
//returns the imaginary part of the number
{
	return b;
}

void complex::show_compl()
//returns a complex number
{
	double r, i;
	r = this->getreal();
	i = this->getimg();
	if (i == 0)
		cout << "The number " << r << " is not a complex number";
	else
		if (i < 0)
			cout << r << " " << i << " " << "i";
		else
			cout << r << " + " << i << "i";
}

void complex::show_exp()
//displays the exponential form of a complex number
{
	int t;
	double r, i;
	r = this->getreal();
	i = this->getimg();
	t = atan2(i, r);
	cout << r << " * e^" << "(" << t << " * i)";
}

void complex::compute_polar()
//displays the polar form of a complex number
{
	int t;
	double r, i;
	r = this->getreal();
	i = this->getimg();
	t = atan2(i, r);
	cout << "z = " << r << " * (cos" << t << " + isin" << t << ")";
}
