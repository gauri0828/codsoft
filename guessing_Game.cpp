#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    // Generate a random number between 1 and 100
    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;
    
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have picked a number between 1 and 100. Try to guess it!" << std::endl;

    // Loop until the user guesses the correct number
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > randomNumber) {
            std::cout << "Your guess is too high. Try again." << std::endl;
        } else if (guess < randomNumber) {
            std::cout << "Your guess is too low. Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << std::endl;
            break;
        }
    }

    return 0;
}