#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <int> v1;
    v1.assign(5,50);


    cout << "Numbers assigned are:  \n";

    for(int i = 0; i <= v1.size(); i++)
    {
        cout << v1[i] << " \n";
        
    }

   

    cout << "\n";
    cout << "\n";
   
}