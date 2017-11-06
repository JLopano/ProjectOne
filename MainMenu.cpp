/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Menu                                             *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

int MainMenu(Stock *s ,Player *p, int day)
{
    //Variables
    int  choice; //Input - Player menu choice.
    bool valid;  //Calc - Whether option two is valid.
    
    //Display Options
    cout << left << fixed << setprecision(2)
         << p->name << "  Day: " << day + 1 << endl
         << "Money: $" << setw(10) << p->money
         << "Stocks: $" << p->assets << endl << endl;
    
    cout << "1. Buy Stocks" << endl
         << "2. Sell Stocks" << endl << endl;
         
    do
    {
        valid = true;
        
        //Input Validation
        cout << "Choose an option: ";
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
        
        if(choice == 2)
        {
            valid = StkAmnt(s, day);
            
            if(valid == false)
            {
                cout << "You do not have any stocks to sell." << endl;
            }
        }
    }
    while(valid == false);
    system("clear");
    
    return choice;
}