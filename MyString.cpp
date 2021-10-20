#include "MyString.hpp"
#include <string>
#include <vector>



/**
 Prints the index where the first appearance of the character specificed in the first argument appears from MyString.

 The function begins to look for the character starting at the second argument, if specified, while ignoring all the characters before the second argument.

 @param c: the character to search for in MyString.
 @param pos: the position in MyString to begin searching for the character.
 @return: the index of the first occurence of the character in MyString.

**/
size_t MyString::find(char c, size_t pos) const {

    for (size_t i = pos; i < s.size(); ++i) {

        if (s[i] == c) {
            return i;
        }
    }
    return -1;

}

/**
 Prints the index where the first appearance of the character, specificed in the first parameter,
 appears in MyString, while searching from right to left.

 If specificed, the function searches for the character starting from the second parameter, and then continuing left, 
 while ignoring all the characters on the right of the second parameter.

 @param c: the character to search for in MyString.
 @param pos: the position in MyString to begin searching for the character
 @return: the index where the character first occurs in MyString.
**/
size_t MyString::rfind(char c, size_t pos) const {

    if (pos >= s.size()) { 

        pos = s.size() - 1;

        while (pos != -1) {

            if (c == s[pos]) {
                return pos;
            }

            pos--;

        }

        return -1;

    }

    if (pos < s.size()) {

        while (pos != -1) {

            if (c == s[pos]) {
                return pos;
            }

            pos--;
        }

        return -1;
    }

    if (s.size() == 0) { 

        return -1; 

    }

}


/**
Prints the characters from MyString beginning from the position specificed by the first parameter, 
and continuing until reaching length of the characters specificed by the second parameter.

@param pos: the position in MyString to begin printing the characters.
@param len: the number of characters to print from MyString.
@return: the characters from MyString specified by the two parameters. 
**/
MyString MyString::substr(size_t pos, size_t len) const {

    MyString tmp;

    if (len == -1) {
        
        for (size_t i = pos; i < s.size(); i++) {

            tmp.push_back(s[i]);
        }

    }

    if (len != -1) {

        for (size_t i = pos; i < pos + len && i < s.size(); i++) {

            tmp.push_back(s[i]);

        }

    }
    
    return MyString(tmp);

}


/**
Printing the position of the substring of characters, specificed by the first parameter,
starting from the position in the vector specificed by the second parameter.

@param str: the series of characters to search for in the vector.
@param pos: the position in the vector to begin searching for the characters.
@return: the index where the first character from the first parameter occurs in MyString;
**/
size_t MyString::find(const MyString& str, size_t pos) const {

    for (size_t i = pos; i <= s.size(); ++i) {

        if ((substr(i, str.size()).s) == str.s) {

            return i;

        }
    }

    if (str.size() > s.size()) {

        return -1;

    }

    return -1;

}

/**
 Prints the index where the first appearance of the characters, specificed in the first parameter,
 appears from MyString, while searching from right to left.

 If specificed, the function searches for the characters starting from the second parameter, and then continuing left,
 while ignoring all the characters on the right of the second parameter.

 @param c: the characters to search for in MyString.
 @param pos: the position in MyString to begin searching for the characters.
 @return: the index where the first character from the first parameter occurs in MyString.
**/
size_t MyString::rfind(const MyString& str, size_t pos) const {

    size_t tmp = std::min(s.size(), pos);

    while (tmp != -1) {

        if (substr(tmp, str.size()).s == str.s) { return tmp; }

        --tmp;

    }
    return -1;
}


#include "students-ignore3.h"