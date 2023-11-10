#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    string location1, location2, location3;
    int randomNum; 
    unsigned seed = time(0);
    srand(seed);
    cout << "I am a fortune teller. Look into my crystal screen \n"
         << "and enter 3 locations you will possibly make as"
         << " your permanent home. \nExample \n\n"
         << " Miami \n Alor Gajah \n Sydney \n\n"
         << "Then I will predict where your home will be in the future.\n\n";

    
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter future home 1 :";
        getline(cin, location1);
        cout << "Enter future home 2 :";
        getline(cin, location2);
        cout << "Enter future home 3 :";
        getline(cin, location3);

            randomNum = 1 + rand() % 4;

        switch (randomNum)
        {
        case 1:
            cout << "\nYou will live in " << location1 << endl;
            break;
        case 2:
            cout << "\nYou will live in " << location2 << endl;
            break;
        case 3:
            cout << "\nYou will live in " << location3 << endl;
            break;
        default:
            cout << "\nSorry, your home will be in any of these locations." << endl;
        }
    }

    return 0;
}