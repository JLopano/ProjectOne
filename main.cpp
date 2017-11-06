/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One                                                  *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#include "ProjHead.h"

int main(int argc, char** argv) {

    //Variables
    Stock *stks = nullptr;  //Input - Pointer to dynamically allocated array.
    
    //Prints Introduction
    PrntIntro();
    
    //Initializes Stocks
    stks = InitStck();
    
    return 0;
}

