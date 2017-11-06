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
    float   value;         //Input - Stock value.
    float   percent[4];    //Input - Percent the stock can increase per day.     
};

struct Player{
    string name;           //Input - Player name.
    float  money = 1000;   //Input - Player's money.
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
int MainMenu(Player*);

/*******************************************************************************
 * InitStck                                                                    *
 * Dynamically allocates an array of stocks and initializes the array.         *
 *                                                                             *
 * RETURNS: Pointer to dynamically allocated array.                            *
 ******************************************************************************/
Stock* InitStck();

/*******************************************************************************
 * InitPlyr                                                                    *
 * Dynamically allocates a player structure and asks for player name.          *
 *                                                                             *
 * RETURNS: Pointer to Player structure.                                       *
 ******************************************************************************/
Player* InitPlyr();

/*******************************************************************************
 * UpStock                                                                     *
 * Updates values of stocks after first day.                                   *
 ******************************************************************************/
void UpStock(Stock*);

#endif /* PROJHEAD_H */