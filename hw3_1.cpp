#include <iostream>
#include <string>
#include <utility>
#include <iomanip>
using namespace std;



int main() {


	int val1, val2, val3, val4;

	cout << "Enter four integers separated by spaces:" << endl;

	cin >> val1 >> val2 >> val3 >> val4;
	

	if (val1 > val2) {
		swap(val1, val2);
	}

	if (val2 > val3) {
		swap(val2, val3);
	}

	if (val3 > val4) {
		swap(val3, val4);
	}
	if (val1 > val2) {
		swap(val1, val2);
	}

	if (val2 > val3) {
		swap(val2, val3);
	}

	if (val3 > val4) {
		swap(val3, val4);
	}
	if (val1 > val2) {
		swap(val1, val2);
	}

	cout << "I've arranged them in order: " << endl;
	cout << val1 << ' ' << val2 << ' ' << val3 << ' ' << val4 << endl;


	return 0;
}