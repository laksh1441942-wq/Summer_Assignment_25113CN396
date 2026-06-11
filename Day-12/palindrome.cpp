#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    return original == reverse;
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}