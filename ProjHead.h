/*******************************************************************************
 * Author       : Jesus Lopez                                                  *
 * Assignment   : Project One Header                                           *
 * Date         : 11/5/17                                                      *
 * Class        : CSC 17-A                                                     *
 ******************************************************************************/
#ifndef PROJHEAD_H
#define PROJHEAD_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;

//Structures
struct Stock{
    string  name;          //Input - Stock name.
    float   strtVal;       //Input - Stock's initial value.
    float   percent[4];    //Input - Percent the stock can increase per day.     
};

/*******************************************************************************
 * PrntIntro                                                                   *
 * Prints out introduction to the game.                                        *
 ******************************************************************************/
void PrntIntro();

/*******************************************************************************
 * MainMenu                                                                    *
 * Displays the main menu.                                                     *
 ******************************************************************************/
//void MainMenu();

/*******************************************************************************
 * InitStck                                                                    *
 * Dynamically allocates an array of stocks and initializes the array.         *
 *                                                                             *
 * RETURNS: Pointer to dynamically allocated array.                            *
 ******************************************************************************/
Stock* InitStck();

#endif /* PROJHEAD_H */