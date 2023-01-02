#include <iostream>







void guess() {

    std::cout << "Thank you for choosing to play!\n";

    // while loop
    // if statements

    int userPoints = 0;
    int userStrikes = 0;
    int maxStrikes = 5;

    while (userStrikes <= maxStrikes) {

        std::string question1;
        std::cout << "what is the capital of Oregon?\n";
        std::cin >> question1;
        if (question1 == "salem") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "Incorrect! You now have " << userStrikes << " strike(s).\n";
        }

        std::string question2;
        std::cout << "what is the capital of California?\n";
        std::cin >> question2;
        if (question2 == "sacramento") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "Incorrect! You now have " << userStrikes << " strike(s).\n";
        }

        std::string question3;
        std::cout << "What is the capital of New Mexico?\n";
        std::cin >> question3;
        if (question3 == "santa fe") {
            userPoints++;
            std::cout << "You are correct! You now have " << userPoints << " point(s).\n";
        } else {
            userStrikes++;
            std::cout << "WRONG! You now have " << userStrikes << " strike(s).\n";
        }



    }

    if (userStrikes > maxStrikes) {

        std::cout << "You have exceeded the number of strikes.\n";
        std::cout << "GAME OVER!\n";
    }

    
}



int main() {

    // US geography quiz

    std::string play;
    std::cout << "Do you want to play?(type 'yes' or 'no'):\n";
    //user input
    std::cin >> play;
    if (play == "yes") {
        guess();
    } else {
        std::cout << "You chose not to play :(";
    }

}