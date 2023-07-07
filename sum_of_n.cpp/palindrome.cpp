#include <iostream>

bool isPalindrome(int x) {
    // For negative numbers, convert them to positive for palindrome comparison
    if (x < 0) {
        x = -x;
    }

    int reverse = 0;
    int temp = x;

    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    return (x == reverse);
}

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    bool result = isPalindrome(num);

    if (result) {
        std::cout << num << " is a palindrome." << std::endl;
    } else {
        std::cout << num << " is not a palindrome." << std::endl;
    }

    return 0;
}
