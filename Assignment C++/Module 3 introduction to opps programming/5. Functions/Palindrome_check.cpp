/*Write a C++ program that takes a number as input and checks whether it is a palindrome using 
a function. */
#include <iostream>
using namespace std;

int is_palindrome(int n) {
    int reversed = 0, original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (is_palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}
