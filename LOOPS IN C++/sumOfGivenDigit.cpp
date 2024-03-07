#include <iostream>

int main() {
    int num, sum = 0, digit;

    // Input the number
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Calculate sum of digits
    while (num != 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add the digit to the sum
        num /= 10;        // Remove the last digit
    }

    // Output the sum
    std::cout << "Sum of digits: " << sum << std::endl;

    return 0;
}
