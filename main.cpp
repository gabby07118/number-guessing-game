#include <iostream>

int num() {
    int i{ 10 };
    int secret = rand() % i + 1;
    return secret;
}

int getGuess() {

    int getGuess{};
    std::cout << "Enter a number: " << '\n';
    std::cin >> getGuess;
    return getGuess;


}

int main() {
    int guesses{ 0 };
    int number{ getGuess() };



    int sec{ num() };
    while (number != sec) {
        if (number < sec) {
            std::cout << "Guess too low." << '\n';
        }
        else {
            std::cout << "Guess too high." << '\n';

        }
        number = getGuess();
        guesses++;

    }
    guesses += 1;
    std::cout << "Correct!!!" << '\n';
    std::cout << "Number of guesses: " << guesses;



    return 0;
}