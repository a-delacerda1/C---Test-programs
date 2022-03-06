#include <iostream>


using namespace std;

int temperature()
{
    double temperature;
    temperature ++;

    cout << "Please enter your temp: ";
     cin >> temperature;


    while (temperature != 0)
    {
        if (temperature > 98.6 || temperature < 98.7)
        {
            cout << "Get better soon!\n";
        }

        else if(temperature == 98.6)
        {
            cout << "temperature is normal\n";
            break;
        }
    
        else
        {
            cout << "All better!\n";
            temperature ++;
        }    
    }
}

int main()
{
    temperature();
}