#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	cout << "Type an integer bigger than or equal to 0:  " << endl;
	int N; cin >> N;
	cout << "The first " << N << " Fibonacci numbers are: " << endl;

	int firstvalue = 1;
	int secondvalue = 1;
	int thirdvalue = 0;

	for (int i = 1; i <= N; ++i) {


		if (i == 1) {
			cout << firstvalue << ' ';
			continue;
		}

		if (i == 2) {
			cout << secondvalue << ' ';
			continue;
		}

		thirdvalue = firstvalue + secondvalue;
		firstvalue = secondvalue;
		secondvalue = thirdvalue;

		cout << thirdvalue << ' ';

	}	

	return 0;
}