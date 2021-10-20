#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;



int main() {

	cout << "Give me a quadratic equation in the form" << endl;
	cout << "    [number]*x^2+[number]*x+[number]=0    " << endl;
	cout << "and I'll try to help solve it for you.    " << endl;
	string s; cin >> s;


	cout << s << endl;


	setprecision(6);


	string A, B, C;


	size_t first_x = s.find('x');
	A = s.substr(0, first_x - 1);


	size_t second_x = s.find('x', first_x + 1);
	B = s.substr(first_x + 3, second_x - (first_x + 4));

	
	size_t length = s.length();
	size_t EqualSign = s.rfind('x');
	C = s.substr(EqualSign + 1, length - (EqualSign + 3)); 



	double a = stod(A);

	double b = stod(B);

	double c = stod(C);



	double plus = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);

	double minus = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);


	
	cout << "(-b plus the square root of the discriminant) / 2a is " << plus << endl;

	cout << "(-b minus the square root of the discriminant) / 2a is " << minus << endl;



	return 0;
}