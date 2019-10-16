#include <iostream>
#include<cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void game1(void);
void game2(void);

int main()
{
    char gamechoice;
    bool choicemade;

    gamechoice = 'n';
    choicemade = false;

    std::cout << "Hello World! Welcome to my game!" << std::endl;
    std::cout << "Would you like to play a Number Guessing game (G) or a game of Rock Paper Scissors (R)?";

    while (choicemade == false) {

        std::cin >> gamechoice;

        if (gamechoice == 'G') {
            choicemade = true;
            game1();
        }
        if (gamechoice == 'R') {
            choicemade = true;
            game2();
        }
        else {
            std::cout << "That's not a valid entry. Please enter either a 'G' or a 'R'." << std::endl;
        }
    }
    return 0;
}

void game1(void)
    {
    int max;
    int randomnum;
    int tries;
    int userip;
    bool gameon;

    max = 10;                                                                                   //This sets the upper bound for the number
    randomnum = 0;                                                                                //This resets the variable holding the random number back to 0
    tries = 5;
    gameon = true;

    srand(time(0));
    randomnum = rand()%max;
    if (randomnum == 0)
    {
        randomnum = randomnum + 1;
    }
    //std::cout << randomnum << std::endl;                                                          //use this line for testing

    std::cout << "I am thinking of a number between 1 and 10, can you guess it?" << std::endl;
    std::cin >> userip;                                                                         //Assigns the users input to a variable

    while (gameon = true)
    {
        if (randomnum == userip)
        {                                                                 //this check if the user input is equal to the generated number
            std::cout << "Well done you guessed my number!" << std::endl;            //if they match this is printed
            tries = 99;
            break;
        }
        else
        {
            std::cout << "Nope that's not my number!" << std::endl;                   //if not this is printed
            tries = (tries - 1);
        }
            if (userip > randomnum)
            {
                std::cout << "My number is lower than that!" << std::endl;
            }
            if (userip < randomnum)
            {
                std::cout << "My number is higher than that!" << std::endl;
            }

            std::cout << "You have " << tries << " more tries!" << std::endl;

            if (tries == 0)
            {
                std::cout << "My number was " << randomnum << "!" << std::endl;
                break;
            }

            std::cout << "I am still thinking of a number between 1 and 10, can you guess it?" << std::endl;
            std::cin >> userip;
    }

    if (tries == 99)
    {
        std::cout << "You won!" << std::endl;
    }

    std::cout << "Thanks for playing my game!" << std::endl;
}

void game2(void)
{

  char compturn;

  compturn = 'a';

  ifstream myfile;
  myfile.open ("RPS.txt");
  ios::in >> compturn;
  std::cout << compturn << std::endl;

  std::cout << "coming soon!" << std::endl;
}
