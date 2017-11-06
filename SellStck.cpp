/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Sell Stocks                                      *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

void SellStck(Stock* s, Player* p, int day)
{
    //Variables
    int  choice;        //Input  - User choice.
    int  amount;        //Input  - Amount of stocks chosen.
    int  total;         //Input  - Total price of stocks.
    bool valid = false; //Calc   - Determines valid transaction.
    
    //Displays Player Information
    cout << left << fixed << setprecision(2)
         << p->name << "  Day: " << day + 1 << endl
         << "Money: $" << setw(10) << p->money
         << "Stocks: $" << p->assets << endl << endl;
    
    //Displays Stock Header
    cout << "   " << setw(7) << "Name" << setw(8) << "Price" 
         << setw(8) << "Owned"
         << endl << "   "
         << setw(7) << "----" << setw(8) << "-----" << setw(8) << "-----"
         << endl;
    
    //Displays Low Risk Stocks
    cout << "   " << "Low-Risk Stocks" << endl << "   " 
         << "---------------" << endl;
    
    for(int i = 0; i < 3; i++)
    {
        //Prints Stock Info
        cout << left << fixed << setprecision(2)
             << i+1 << ". "
             << setw(6) << s[i].name << "$" << setw(8) << s[i].value 
             << s[i].count << endl;
    }
    
    //Displays Medium Risk Stocks
        cout << endl << "   " << "Med-Risk Stocks" << endl << "   "
             << "---------------" << endl; 
        
    for(int i = 3; i < 6; i++)
    {
        //Prints Stock Info
        cout << left << fixed << setprecision(2)
             << i+1 << ". "
             << setw(6) << s[i].name << "$" << setw(8) << s[i].value 
             << s[i].count << endl;
    }
        
    //Displays High Risk Stocks
    cout << endl << "   " << "High-Risk Stocks" << endl << "   "
         << "----------------" << endl; 
        
    for(int i = 6; i < 9; i++)
    {
        //Prints Stock Info
        cout << left << fixed << setprecision(2)
             << i+1 << ". "
             << setw(6) << s[i].name << "$" << setw(8) << s[i].value 
             << s[i].count << endl;
    }
      
    //Asks & Retrieves Information
    cout << endl << "Enter the number that corresponds with the stock you want "
            "to sell: ";
    
    cin >> choice;
    
    choice = choice - 1;
    
    while(cin.fail())
    {
        cout << "Invalid Input. Enter a Valid Option: ";
        cin.clear();
        cin.ignore();
        cin >> choice;
    }
    
    while(choice > 8 || choice < 0)
    {
        cout << "Invalid Input. Enter a Valid Option: ";
        cin.clear();
        cin.ignore();
        cin >> choice;
    }
    
    system("clear");
    cin.ignore();
    
    //Displays Player Information
    cout << left << fixed << setprecision(2)
         << p->name << "  Day: " << day + 1 << endl
         << "Money: $" << setw(10) << p->money
         << "Stocks: $" << p->assets << endl << endl;
    
    //Displays Stock Name && Value
    cout << s[choice].name << ": $" << s[choice].value << endl 
         << "Owned: " << s[choice].count << endl;
    
    do
    {
        //Asks and Retrieves Purchase Information
        cout << "Enter amount of stocks you want to sell: ";

        cin >> amount;

        while(cin.fail() || amount < 0)
        {
            cout << "Invalid Input. Enter a Valid Amount: ";
            cin.clear();
            cin.ignore();
            cin >> amount;
        }

        if(amount > s[choice].count)
                cout << "You do not have enough stocks to sell." << endl;
        
        if(amount <= s[choice].count)
        {
            //Calculates & Verifies Total Amount
            total = amount * s[choice].value;
            p->money = p->money + total;
            s[choice].count = s[choice].count - amount;
            valid = true;
        }
    }
    while(valid == false);
    
    system("clear");
}