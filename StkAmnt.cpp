/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Verify Stock Amount                              *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

bool StkAmnt(Stock* s, int d)
{
    bool sell = false;     //Calc - Whether user can sell stocks.
    
    //Checks Day
    if(d == 0)
        return sell;
    
    //Checks if Stock Count > 0
    for(int i = 0; i < 9; i++)
    {
        if(s[i].count > 0)
        {
            sell = true;
            return sell;
        }
    }
    
    //Return False
    return sell;
}