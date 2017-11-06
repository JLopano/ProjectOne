/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Update Stock Values                              *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

void UpStock(Stock *s)
{
    int rngSus;     //Input - Random number 0 - 3.
    
    for(int i = 0; i < 9; i++)
    {
        //Assigns rngSus a Random Number
        rngSus = rand() 3 + 0;
        
        //Updates Stock Values
        s[i].value = s[i].value + (s[i].value * s[i].percent[rngSus]);
    }
}