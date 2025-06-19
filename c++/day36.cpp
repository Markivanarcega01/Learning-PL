#include <iostream> // Required for input/output operations
#include <cmath>    // Required for sqrt() function

// Function to check if a number is prime
bool isPrime(int num) {
    // Numbers less than or equal to 1 are not prime
    if (num <= 1) {
        return false;
    }
    // 2 and 3 are prime numbers
    if (num <= 3) {
        return true;
    }
    // If num is divisible by 2 or 3, it's not prime
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    // Check for divisibility by numbers of the form 6k ± 1
    // This optimization skips multiples of 2 and 3
    for (int i = 5; i * i <= num; i = i + 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    // If no divisors found, the number is prime
    return true;
}

int main() {
    int number;
    std::cout << "Enter a number to check for primality: ";
    std::cin >> number; // Get input from the user

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0; // Indicate successful program execution
}