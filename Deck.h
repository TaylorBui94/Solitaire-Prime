//
//  Deck.hpp
//  Prog 1
//
//  Created by Taylor Bui on 2/12/19.
//  Copyright © 2019 Taylor Bui. All rights reserved.
//

#ifndef Deck_h
#define Deck_h

#include "Card.h"
#include <vector>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include<ctime>

using namespace std;
class Deck
{
public:
    Deck();
    void showDeck();
    void shuffle();
    Card deal();
    int deckSize();
    void reset();
private:
    vector<Card> deck;
    
};

#endif /* Deck_hpp */
