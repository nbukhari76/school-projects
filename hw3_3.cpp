#include <iostream>
#include <limits>
#include <algorithm>
#include <iomanip>
using namespace std;



int main() {

    cout << "Enter a list of integers: " << endl;

    int minimum = INT_MAX;
    int maximum = INT_MIN;
    int i;


    while (cin >> i)
    {
        minimum = min(i, minimum);
        maximum = max(i, maximum);

        if (cin.peek() == '\n')
        {
            cin.get();
            break;
        }
    }

  
    cout << "The max of the integers you enterd is " << maximum << endl;
    cout << "The min of the integers you entered is " << minimum << endl;

    while (true) {
        cout << "Continue? (y/n)" << endl;

        char response = cin.get(); cin.ignore();

        if (response == 'n') { break; }
    }



    return 0;
}