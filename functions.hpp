#ifndef functions_hpp
#define functions_hpp


#include <iostream>     // cout, cin
#include <cassert>      // assert in fib function
#include <string>       // parameter in get_double
#include <vector>       // a lot of code using vectors
#include <utility>      // swap


// Question 1a.
/**
 Prints true/false depending on whether the int is a leap year.
 @param year: the year to check if it is a leap year
 @return the bool value true/false depending on if year is a leap year.
*/
bool leap_year(int year);

// Question 1b.
/**
 Prints the Fibonacci numbers, and 
 they are separated by spaces;

 the ints are separated by spaces,
 and an endl occurs at the end.

 @param N: the amount of Fibonacci numbers outputted;
            the inputs are limited to a value between 0-46
*/
void fib(int N);

// Question 1c.
/**
 Reads the string and adds a space;
 reads in a double from the console and outputs it.

 @param prompt: the string to print
 @return the double value that was inputted into the console

*/
double get_double(std::string prompt);


// Michael made this function. Do NOT delete it!!
/**
 Prints a vector of ints;
 the ints are separated by spaces,
 and an endl occurs at the end.

 @param v : the vector to print
*/
void printMyVector(const std::vector<int>& v);

// Question 2.
// Michael commented this function.
/**
 Concatenates two vectors of ints.
 @param v : the first vector
 @param w : the second vector
 @return the concatenation of v and w, that is,
         the vector storing all of the values of v
         followed by all of the values of w.
*/
std::vector<int> concatenateMyVectors(const std::vector<int>& v,
    const std::vector<int>& w);


// Question 3.
/**
 Prints the ints after numerically sorts them, and
 separates the ints with a space.
 @param i1: the first int
 @param i2: the second int
 @param i3: the third int
 @param i4: the fourth int
 @param i5: the fifth int

*/
void sort5(int& i1, int& i2, int& i3, int& i4, int& i5);


// Question 4.
/**
 Prints the vector after reversing the order they were originally in,
 and separated by spaces.
 @param v: the vector to reverse
*/
void reverse(std::vector<int>& v);


// Question 5.
/**
Prints a vector of bools;
 the bools are separated by spaces,
 and an endl occurs at the end.

 @param v : the vector to print
*/
void print(const std::vector<bool>& v);



/**
Adds zeros to the end of the vector of bools,
 the bools are separated by spaces.

 @param v : the vector to add zeros to
 @param numbertoAdd: the number of zeros to add to v
*/
void addZeros(std::vector<bool>& v, size_t numberToAdd);


/**
Prints the binary sum of two vector of bool values after making them the same size;
 the bools are separated by spaces,
 and an endl occurs at the end.

 @param v : the first vector of bool values
 @param w: the second vector of bool values
 @return the binary sum of v and w separated by spaces
*/
std::vector<bool> addition(std::vector<bool> v,
    std::vector<bool> w);
#endif /* functions_hpp */
