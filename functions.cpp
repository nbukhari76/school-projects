#include "functions.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <stdio.h>

using namespace std;


bool leap_year(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
        }
        else {
            return true;
        }
    }
    return false;
}

void fib(int N) {
    assert(0 <= N && N <= 46);
    int a = 1, b = 0;

    for (int i = 1; i <= N; ++i) {
        cout << a << ' ';
        int c = a + b;

        b = a;
        a = c;
    }
}

double get_double(std::string prompt) {

    double faveNum;
    cout << prompt << ' ';
    cin >> faveNum;
    if (cin.fail()) {
        cout << "cin failed, so 0 was returned." << endl;
        return 0;
    }
    else {
        return faveNum;
    }
}


// DO NOT DELETE OR EDIT THIS FUNCTION
void printMyVector(const std::vector<int>& v) {
    for (size_t i = 0, N = v.size(); i < N; ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
}

std::vector<int> concatenateMyVectors(const std::vector<int>& v,
    const std::vector<int>& w) {
    
    vector<int> u;
    size_t a = v.size();
    size_t b = w.size();

        for (size_t i = 0; i < a; ++i) {
            u.push_back(v[i]);
        }
        for (size_t j = 0; j < b; ++j) {
            u.push_back(w[j]);
        }
    return std::vector<int>(u);
}


void sort5(int& i1, int& i2, int& i3, int& i4, int& i5) {
    if (i1 > i2) { swap(i1, i2); }
    if (i2 > i3) { swap(i2, i3); }
    if (i3 > i4) { swap(i3, i4); }
    if (i4 > i5) { swap(i4, i5); }
    if (i1 > i2) { swap(i1, i2); }
    if (i2 > i3) { swap(i2, i3); }
    if (i3 > i4) { swap(i3, i4); }
    if (i4 > i5) { swap(i4, i5); }
    if (i1 > i2) { swap(i1, i2); }
    if (i1 > i2) { swap(i1, i2); }
    if (i2 > i3) { swap(i2, i3); }
    if (i3 > i4) { swap(i3, i4); }
    if (i4 > i5) { swap(i4, i5); }
    if (i1 > i2) { swap(i1, i2); }
}


void reverse(std::vector<int>& v) {

    for (int i = 0; i < v.size() / 2; ++i) {
        swap(v[i], v[v.size() - 1 - i]);
    }

    for (size_t i = 0, N = v.size(); i < N; ++i) {
        std::cout << v[i] << ' ';
    }
}


void print(const std::vector<bool>& v) {
    for (size_t i = 0, N = v.size(); i < N; ++i) {
        std::cout << v[i] << ' ';
    }
    std::cout << std::endl;
}

void addZeros(std::vector<bool>& v, size_t numberToAdd) {
    for (size_t i = 0; i < numberToAdd; i++) {
        v.push_back(0);
    }
    std::cout;
}

std::vector<bool> addition(std::vector<bool> v, std::vector<bool> w) {

    int carry = 0;
    
    int a = w.size();
    int b = v.size();

    vector<bool> ans;

    while (v.size() != w.size()) {

        if (a > b) {
            v.push_back(0);
        }
        else {
            w.push_back(0);
        }
    }

    for (size_t j = 0, N = v.size() - 1; j <= N; j++) {

        int& tmp = carry;


        if ((v.at(j) == 0) && (w.at(j) == 0) && (carry == 0)) {
            ans.push_back(0);
            carry = 0;
        }
        


        if ((v.at(j) == 1) && (w.at(j) == 1) && (carry == 1)) {
            ans.push_back(1);
            carry = 1;
        }

        if ((v.at(j) == 1) && (w.at(j) == 1) && (carry == 0)) {
            ans.push_back(0);
            carry = 1;
        }


        if ((v.at(j) == 0) && (w.at(j) == 0) && (carry == 1)) {
            ans.push_back(1);
            carry = 0;
        }


        if ((v.at(j) == 0) && (w.at(j) == 1) && (carry == 0)) {
            ans.push_back(1);
            carry = 0;
        }


        if ((v.at(j) == 0) && (w.at(j) == 1) && (carry == 1)) {
            ans.push_back(0);
            carry = 1;
        }


        if ((v.at(j) == 1) && (w.at(j) == 0) && (carry == 0)) {
            ans.push_back(1);
            carry = 0;
        }


        if ((v.at(j) == 1) && (w.at(j) == 0) && (carry == 1)) {
            ans.push_back(0);
            carry = 1;
        }

    }

    if (carry == 1) {
        ans.push_back(carry);
    }

    return std::vector<bool>(ans);
}
