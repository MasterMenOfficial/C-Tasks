#include <iostream>

using namespace std;

/*
	| Task #2
	| ---------------------
	| Programmed by MasterMen
	| Start Date: 2020.11.25 18:28
	| Last Date: 2020.11.25 19:19
*/

int main() {

	int Number;
	short a, b, c, d, e, f;
	short mod = 1;
	short l = 0;
	short = 0;
	
	/*
	bool Equ(int a, int b) {
		if(a == b)
			return true;
		else
			return false;
	}
	*/
	
	cout << "Enter a 6-digits Number: ";
	cin >> Number;
	
	if (Number > 0)
		mod = 1;
	else
		mod = -1;
	
	a = (Number / 100000) * mod;
	b = ((Number % 100000) / 10000) * mod;
	c = ((Number % 10000) / 1000) * mod;
	d = ((Number % 1000) / 100) * mod;
	e = ((Number % 100) / 10) * mod;
	f = (Number % 10) * mod;
	
	l = a + b + c;
	r = d + e + f;
	
	cout << "Left Part: " << a << " + " << b << " + " << c << " = " << l << endl;
	cout << "Right Part: " << d << " + " << e << " + " << f << " = " << r << endl;
	cout << "Summary: ";
	
	if (l == r)
		cout << "You got a Lucky Number" << endl;
	else
		cout << "You got a Number" << endl;
	
	return 0;
}