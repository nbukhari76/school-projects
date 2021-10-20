#include <iostream>
#include <string>
using namespace std;



int main() {


	string s;
	/*cout << "Please enter an integer between 1,000 and 999,999: ";
	cin >> s;


	size_t len = s.length();
	

	string FirstHalf;
	FirstHalf = s.substr(0, len - 4);


	string SecondHalf;
	SecondHalf = s.substr(len - 3, len + 1);



	cout << FirstHalf + SecondHalf << endl;*/

	s = "Hello my name is Nadia";

	cout << s.substr(5, 5);



	return 0;
}