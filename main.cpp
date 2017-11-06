/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One                                                  *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

int main(int argc, char** argv) {
    
    //Seed Random Number Generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Variables
    Stock  *stks  = nullptr;  //Input - Pointer to dynamically allocated array.
    Player *plyr  = nullptr;  //Input - Pointer to dynamic structure.
    int    choice;            //Input - User menu choice.
    
    //Prints Introduction
    PrntIntro();
    
    //Initializes Stocks
    stks = InitStck();
    
    //Creates Player Structure
    plyr = InitPlyr();
    
    //Begin Seven Day Loop
    for(int i = 0; i < 7; i++)
    {    
        //Displays Main Menu
        choice = MainMenu(stks, plyr, i);
        
        //Updates Stock Values After First Day
        if(i > 0)
        {
            UpStock(stks);
        }
        
        //User Option
        switch(choice)
        {
            case 1:
                BuyStck(stks, plyr, i);
                break;
            case 2:
                SellStck(stks, plyr, i);
                break;
            default:
                break;
        }
        
        //Updates Player's Assets
        UpPlyr(stks, plyr);
    }
    return 0;
}

