/* Write a C++ program to check if a given string is a palindrome (reads the same 
forwards and backwards.*/
#include <iostream>
using namespace std;
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Characters do not match
        }
        left++;
        right--;
    }
    return true; // All characters matched
}