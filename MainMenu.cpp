/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Menu                                             *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

int MainMenu(Player *p)
{
    //Variables
    int choice;     //Input - Player Menu Choice
    
    //Display Options
    cout << left << fixed << setprecision(2);
    cout << p->name << endl
         << "Money: $" << setw(10) << p->money
         << "Stocks: $" << endl << endl;
    
    cout << "Choose an option." << endl << endl
         << "1. Buy Stocks" << endl
         << "2. Sell Stocks" << endl;
    
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
        cin.ignore();
        cin >> choice;
    }
    
    system("clear");
    
    return choice;
}