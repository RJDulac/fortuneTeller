#include <iostream>
#include <stdlib.h>
using namespace std;

enum fortune
{
    money,
    love,
    job

};
void getFortune();

int main()
{

    bool isTelling = true;
    char input = '\0';
    while (isTelling)
    {
        if (input != 'y')
        {
            cout << "Press enter to get your fortune!" << endl;
            cin.get(input);
            getFortune();
        }
        cout << "Enter y if you want another fortune or n if you don't want another fortune." << endl;
        cin >> input;
        if (input == 'n')
        {
            isTelling = false;
        }
        else
        {
            getFortune();
        }
    }

    return 0;
}
void getFortune()
{
    srand(time(NULL));
    int random = rand() % 3;
    switch (fortune(random))
    {
    case money:
        cout << "You will recieve large sums of money." << endl;
        break;
    case love:
        cout << "You will find true love." << endl;
        break;
    case job:
        cout << "You will get a promotion at work!" << endl;
        break;
    default:
        cout << "something went wrong";
    }
}