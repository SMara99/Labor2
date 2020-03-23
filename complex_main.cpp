#include <iostream>
#include "complex.h"

using namespace std;

int main() {
	complex a, b, c, d, e;
	a.set_a(1); a.set_b(2);
	b.set_a(3); b.set_b(4);
	c.set_a(5); c.set_b(6);
	d.set_a(7); d.set_b(8);
	e.set_a(9); e.set_b(10);
	complex vector[] = { a,b,c,d,e };

	//Sort nach absoluten Betrag
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; i < 4; i++) {
			if (vector[i].abs() > vector[i+1].abs()){
				complex aux = vector[i];
				vector[i] = vector[i + 1];
				vector[i + 1] = aux;
			}
		}
	}

	//Gesammtsumme der Reihe
	complex s = a.add(b);
	for (int i = 2; i < 5; i++) {
		s = s.add(vector[i]);
	}


	complex a(1, 2), b(6, 9), c(4, 20), d(8, 4);
	complex vector[] = { a, b, c, d };
	for (int i = 0; i < 4; i++)
	{
		vector[i].show_compl();
		cout << endl;
		cout << "exponential : ";
		vector[i].show_exp();
		cout << endl;
		cout << "polar : ";
		vector[i].compute_polar();
		cout << endl;
	}

	return 0;
}