#include <iostream>
#include <cstdlib>
#include <ctime>

class Game {
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

public:

    Game(int max) : maxNumber(max), playerGuess(0), randomNumber(0), numOfGuesses(0) {
        std::srand(static_cast<unsigned int>(std::time(0)));
        randomNumber = std::rand() % maxNumber + 1;
    }

    ~Game() {
        std::cout << "Game object is being destroyed." << std::endl;
    }

    void play() {
        std::cout << "This is a guessing game! Guess a number between 1 and " << maxNumber << "." << std::endl;

        while (playerGuess != randomNumber) {
            std::cout << "Enter your guess: ";
            std::cin >> playerGuess;

            numOfGuesses++;

            if (playerGuess < randomNumber) {
                std::cout << "The number is higher." << std::endl;
            } else if (playerGuess > randomNumber) {
                std::cout << "The number is lower." << std::endl;
            } else {
                std::cout << "Correct answer! Congratulations!" << std::endl;
            }
        }
    }

    void printGameResult() {
        std::cout << "Number of guesses: " << numOfGuesses << std::endl;
    }
};

int main() {

    Game gameObj(40);


    gameObj.play();


    gameObj.printGameResult();

    return 0;
}
