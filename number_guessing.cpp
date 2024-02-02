#include <iostream>
#include <ctime>

int random_generation(){
    srand(time(nullptr));
    return rand()%100+1;
}

int main(){
    const int TotalGuesses = 10;

    std::cout << "--------NUMBER GUESSING GAME--------\n"
              << " Guess the number generated by the  \n"
              << " computer.The number will be between \n"
              << " 1 and 100. You have " << TotalGuesses << " tries to\n"
              << " guess it. Good Luck :> \n\n";

    int guess = 0, number = random_generation();
    for(int i = 0; i < TotalGuesses; i++) {
        std::cout << " Enter your guess: ";
        std::cin >> guess;
        if(guess == number){
            std::cout << "Congratulations you have guessed the\n"
                      << "number correctly!\n";
            break;
        }
        else if(guess < number){
            std::cout << "Your guess was smaller than the actual number\n";
            std::cout << (TotalGuesses-1-i) << " tries remaining\n";
        }
        else{
            std::cout << "Your guess was larger than the actual number\n";
            std::cout << (TotalGuesses-1-i) << " tries remaining\n";
        }
    }

}