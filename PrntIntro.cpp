/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Intro                                            *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

void PrntIntro()
{
    //Output Introduction
    cout << left;
    cout << "Welcome to Stock Simulator!" << endl << endl;
    
    cout << "After making a killing selling avocado toast to Millennials, you "
                "decided to venture into the stock market."
         << endl
         << "You start the game with $1,000 and your goal is to make as much "
                "money as you can in 10 days by trading stocks."
         << endl
         << "Good luck, have fun!"
         << endl
         << endl
         << "Press any key to continue."
         << endl;
    
    cin.get();
    system("clear");
}