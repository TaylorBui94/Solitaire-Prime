//
//  Player.h
//  Prog 1
//
//  Created by Taylor Bui on 2/12/19.
//  Copyright © 2019 Taylor Bui. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp
#include <iostream>
#include "card.h"
#include "deck.h"
#include <vector>
#include <cmath>

using namespace std;

class Player
{
public:
    Player();
    bool isPrime();
    int sumPile();
    void addCard(Card c);
    void clearPile();
    void win();
    void lose();
    void printPile();
    Card lastCard();
    int getPrimePile();
    void resetPile();
private:
    vector<Card> pile;
    int primePile;
};

#endif /* Player_h */
