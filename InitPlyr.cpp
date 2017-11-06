/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Initialize Player                                *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

Player* InitPlyr()
{
    //Variables
    Player *temp = nullptr;     //Input - Pointer to dynamic structure.
    
    //Dynamically Creates Structure
    temp = new Player;
    
    //Retrieves Player Name
    cout << "First, let's start with your name."
         << endl
         << endl
         << "Enter your name: ";
    getline(cin, temp->name);
    
    //Outputs Name and Flavor Text
    cout << endl
         << endl
         << "Alright, "
         << temp->name
         << " let's see if your knowledge of selling avocado toast can carry "
            "over to the stock market."
         << endl
         << endl
         << "Press Enter to continue.";
    
    cin.get();
    system("clear");
    
    return temp;
}