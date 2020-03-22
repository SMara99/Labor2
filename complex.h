#pragma once
class complex
{
	//z = a + b*i;
	double a;
	double b;
	public:

		//default constructor
		complex();

		//constructor cu param
		complex(double a_value, double b_value);
		
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

		//absoluten Betrag
		double abs();
};

