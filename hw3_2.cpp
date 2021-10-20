#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	cout << "Enter a strictly positive integer: " << endl;
	unsigned int x; cin >> x;

	cout << "The binary representation of " << x << " is given by ";

	if (x == 0) 
	{
		cout << "This number is not STRICTLY positive" << endl;
		return 0;
	}

	int remainder;
	int i = 1;
	int binary = 0;

	while (x > 0) 
	{
		remainder = x % 2;
		x = x / 2;

		binary = binary + (remainder * i);

		i = i * 10;
	}

	cout << binary << endl;
	

	return 0;
}


