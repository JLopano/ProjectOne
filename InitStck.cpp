/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Initialize Stock                                 *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

Stock* InitStck()
{
    //Variables
    int   size = 9;         //Input - Size of stock array.
    Stock *ar  = nullptr;   //Input - Null pointer to stock array/
    
    //Dynamically Creates New Array
    ar = new Stock[size];
    
    //Sets Value of Stocks
    //Low Risk Stocks
    ar[0].name = "GBP";
    ar[0].value = 100;
    ar[0].percent[0] = -.02;
    ar[0].percent[1] = 0;
    ar[0].percent[2] = .01;
    ar[0].percent[3] = .015;
    
    ar[1].name = "GCHI";
    ar[1].value = 75;
    ar[1].percent[0] = -.02;
    ar[1].percent[1] = 0;
    ar[1].percent[2] = .011;
    ar[1].percent[3] = .016;
    
    ar[2].name = "CHIE";
    ar[2].value = 110;
    ar[2].percent[0] = -.02;
    ar[2].percent[1] = 0;
    ar[2].percent[2] = .009;
    ar[2].percent[3] = .015;
    
    //Medium Risk Stocks
    ar[3].name = "FTBA";
    ar[3].value = 150;
    ar[3].percent[0] = -.02;
    ar[3].percent[1] = -.01;
    ar[3].percent[2] = .015;
    ar[3].percent[3] = .02;
    
    ar[4].name = "TLQD";
    ar[4].value = 180;
    ar[4].percent[0] = -.02;
    ar[4].percent[1] = -.013;
    ar[4].percent[2] = .015;
    ar[4].percent[3] = .021;
    
    ar[5].name = "MZHR";
    ar[5].value = 100;
    ar[5].percent[0] = -.03;
    ar[5].percent[1] = -.01;
    ar[5].percent[2] = .01;
    ar[5].percent[3] = .03;
    
    //High Risk Stocks
    ar[6].name = "YSH";
    ar[6].value = 110;
    ar[6].percent[0] = -.022;
    ar[6].percent[1] = -.018;
    ar[6].percent[2] = -.012;
    ar[6].percent[3] = .055;
    
    ar[7].name = "RDDT";
    ar[7].value = 120;
    ar[7].percent[0] = -.02;
    ar[7].percent[1] = -.015;
    ar[7].percent[2] = -.01;
    ar[7].percent[3] = .05;
    
    ar[8].name = "FRCH";
    ar[8].value = 100;
    ar[8].percent[0] = -.04;
    ar[8].percent[1] = -.03;
    ar[8].percent[2] = -.02;
    ar[8].percent[3] = .08;
    
    return ar;
}