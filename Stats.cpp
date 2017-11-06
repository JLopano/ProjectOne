/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Display Stats                                    *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

void Stats(Stock* s, Player* p)
{
    //Calculates Total
    p->total = p->assets + p->money;
    
    system("clear");
    
    //Outputs Stats
    cout << left << fixed << setprecision(2)
         << "The seven days are over. Let's see how you did." << endl << endl
         << p->name << endl
         << "Money: $" << p->money << endl
         << "Stocks: $" << p->assets << endl 
         << "Total: $" << p->total << endl;
    
    if(p->total < 1000)
    {
        cout << "You ended up losing money. Maybe the stock market isn't for "
                "you." << endl << endl;
    }
    
    if(p->total == 1000)
    {
        cout << "You ended up right where you started. I hope you at least had "
                "a fun week." << endl << endl;
    }
    
    if(p->total > 1000)
    {
        cout << "Not bad. Seems like you might make a decent investor after "
                "all" << endl << endl;
    }
    
    cin.get();
}