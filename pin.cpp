#include <iostream>

using namespace std;

// create pin function
void pin()
{
    int pin = 0;
        int tries = 0;
        int i;
        std::cout << "Bank of Aeneas\n";
        std::cout << "MAIN MENU\n";
        std::cout << "=================\n";

        std::cout << "Enter your PIN: ";
        std::cin >> pin;
        tries++;

        while(pin != 1218 && tries <3)
        {
            std::cout << "Enter your Pin: ";
            std::cin >> pin;
            tries ++;

        }
        if (pin == 1218)
        {
            std::cout << "Pin Accepted\n";
            std::cout << "You now have access\n";
        }
        else
        {
            std::cout << "Invalid Pin! Please try again\n";
        }
}

// Call pin function
int main()
{
    pin();        
}
