#include <iostream>
#include <string>
using namespace std;

int main() {

	int input; //create a variable for the input

	cout << "Please enter an integer between 1 and 12: ";
	cin >> input; //enter an a number between 1 and 12, in order to get the corresponding month


	string month = "January  February March    April    May      June     July     August   September October  November December ";



	const string January = month.substr(0, 9); //extracts January from the string

	const string February = month.substr(9, 9); //extracts February from the string

	const string March = month.substr(18, 9); //extracts March from the string
	
	const string April = month.substr(27, 9); //extracts April from the string

	const string May = month.substr(36, 9); //extracts May from the string

	const string June = month.substr(45, 9); //extracts June from the string

	const string July = month.substr(54, 9); //extracts July from the string

	const string August = month.substr(63, 9); //extracts August from the string

	const string September = month.substr(72, 9); //extracts September from the string

	const string October = month.substr(81, 9); //extracts October from the string
	
	const string November = month.substr(90, 9); //extracts November from the string

	const string December = month.substr(99, 9); //extracts December from the string

	

	string All_Month = January + February + March + April + May + June + July + August + September + October + November + December;

	
	size_t your_month = (input - 1) * 9; //calculates the input that will correspond to the correct month from the string


	cout << All_Month.substr(your_month, 9) << endl; //outputs the month from the input


	return 0;
}

