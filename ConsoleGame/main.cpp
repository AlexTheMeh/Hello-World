#include <iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main() {
    int max;
    int randomN;
    int UserIP;
    int Tries;

    max = 10;                                                                                   //This sets the upper bound for the number
    randomN = 0;                                                                                //This resets the variable holding the random number back to 0
    Tries = 5;

    srand(time(0));
    randomN = rand()%max;
    std::cout << randomN << std::endl;                                                          //use this line for testing

    std::cout << "Hello, World!" << std::endl;
    std::cout << "I am thinking of a number between 1 and 10, can you guess it?" << std::endl;
    std::cin >> UserIP;                                                                         //Assigns the users input to a variable
    while (Tries != 0) {

        if (randomN == UserIP) {                                                                 //this check if the user input is equal to the generated number
            std::cout << "Well done you guessed my number!" << std::endl;            //if they match this is printed
            Tries = 0;
        }
        else {
            std::cout << "Nope that's not my number!" << std::endl;                   //if not this is printed
            std::cout << "You have " << Tries << " more tries!" << std::endl;

            if (UserIP > randomN) {
                std::cout << "My number is lower than that!" << std::endl;
            }
            else{
                std::cout << "My number is higher than that!" << std::endl;
            }

            std::cout << "I am still thinking of a number between 1 and 10, can you guess it?" << std::endl;
            std::cin >> UserIP;
            Tries = (Tries - 1);

        }

        if (Tries == 0){
            std::cout << "You are out of tires"
        }
    }

    //std::cout << "Thanks for playing my game!" << std::endl;

    return 0;
}