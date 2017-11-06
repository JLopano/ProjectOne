/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Update Player Assets                             *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

void UpPlyr(Stock* s, Player* p)
{
    //Resets Assets
    p->assets = 0;
    
    //Accumulates Total Stock Value
    for(int i = 0; i < 9; i++)
        p->assets += s[i].count * s[i].value;
}