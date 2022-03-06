#include <iostream>
#include <string>
int login()
{
    using namespace std; 
    string name;
    string password;
    int login_attempt = 0;
    login_attempt++;
    

    while(login_attempt < 5)

    {
        cout << "Please Enter your name:  ";
        cin >> name;
        cout << "=============";
        login_attempt++;
        cout << "Please enter your password: ";
        cout << "=============";
        cin >> password;
        login_attempt++;
    
        if(name == "Aeneas" && password == "12345")
        {
            cout << "You are logged in!\n";
            break;
        }

        else if (name == "Aeneas" && password != "12345")
        {
            cout << "Invalid Entry\n";
            login_attempt++;
        }
        

        if(name =="Andrew" && password == "34565" )
        {
            cout << "You are logged in!\n";
        }

        else if (name == "Andrew" && password != "34565")
        {
            cout << "Invalid Entry\n";
            login_attempt++;
        }


        if (login_attempt == 5)
        {
            std::cout << "You have used all of your attempts.\n";
            std::cout << "Please reset your password.\n";
            std::cout << "Program has terminated.\n";
            
        }
    }
}

int main()
{
    login();
}