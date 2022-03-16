// Midterm-Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    bool game = true;

    while (game)
    {
        std::cout << "Answer the following:\n" << std::endl;
        std::cout << "What type of dragon is Toothless from How To Train Your Dragon?" << std::endl;
        std::cout << "1. ZippleBack\n2. Nightfury\n3. Bewilderbeast\n4. DeadlyNadder\n";
        std::cout << "Answer: ";

        int ans;
        std::cin >> ans;
        if (ans == 2)
        {
            std::cout << "\nCongrats! You're right\n";
        }
        else std::cout << "\nWrong Answer\n";
        std::cin.clear();
        std::cin.ignore();

        std::cout << "Thanks for playing. Would you like to play again? [1(Yes)/2(No)] : ";
        std::cin >> ans;
        if (ans == 2)
        {
            game = false;
        }
        std::cin.clear();
        std::cin.ignore();
        std::cout << "\n\n\n";
    }
}
