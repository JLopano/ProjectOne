/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Menu                                             *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

int MainMenu(Player *p, int day)
{
    //Variables
    int choice;     //Input - Player Menu Choice
    
    //Display Options
    cout << left << fixed << setprecision(2)
         << p->name << "  Day: " << day + 1 << endl
         << "Money: $" << setw(10) << p->money
         << "Stocks: $" << p->assets << endl << endl;
    
    cout << "1. Buy Stocks" << endl
         << "2. Sell Stocks" << endl << endl
         << "Choose an option: ";
    
    //Input Validation
    cin >> choice;
    
    while(cin.fail())
    {
        cout << "Invalid Input. Enter a Valid Option: ";
        cin.clear();
        cin.ignore();
        cin >> choice;
    }
    
    while(choice > 2 || choice < 1)
    {
        cout << "Invalid Input. Enter a Valid Option: ";
        cin.clear();
        cin.ignore();
        cin >> choice;
    }
    
    system("clear");
    
    return choice;
}