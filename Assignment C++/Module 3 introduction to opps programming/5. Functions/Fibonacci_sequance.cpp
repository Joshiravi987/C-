/*Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
function*/
#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: return n for 0 or 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}