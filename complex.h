#pragma once
class complex
{
private:
	//z = a + b*i;
	double a;
	double b;
public:

	//default constructor
	complex();

	//constructor cu parametri
	complex(double a_value, double b_value);
	
	//alt constructor cu parametri
	complexa(double r, double i);

	//destructor
	~complex();

	//getter
	double get_a() const;
	double get_b() const;

	//setter
	void set_a(double a_value);
	void set_b(double b_value);

	//arithmetic "+"
	complex add(complex other);

	//arithmetic "*"
	complex mul(complex other);

	//arithmetic "/"
	complex quot(complex other);

	//get real part
	double getreal() const;

	//get imaginary part
	double getimg() const;

	//print complex number
	void show_compl();

	//exponential form
	void show_exp();

	//polar representation
	void compute_polar();

	//absoluten Betrag
	double abs();
};

