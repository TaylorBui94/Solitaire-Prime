//
//  Player.cpp
//  Prog 1
//
//  Created by Taylor Bui on 2/12/19.
//  Copyright © 2019 Taylor Bui. All rights reserved.
//

#include "Player.hpp"

Player :: Player()
{
    primePile = 0;
    vector<Card> pile;
}

bool Player :: isPrime()
{
    int c;
    c = sumPile();
    if(c == 0 || c== 1)
        return false;
    for (int i = 2; i < sqrt(c); i++)
    {
        if (c % i ==0)
            return false;
    }
    primePile ++;
    return true;
}


void Player :: addCard(Card c)
{
    pile.push_back(c);
}

void Player :: clearPile()
{
    pile.clear();
}

int Player :: sumPile()
{
    int total = 0;
    for (int i = 0; i < pile.size(); i++)
    {
        total = total + pile[i].getValue();
    }
    return total;
}

void Player :: win()
{
    cout << "Winner in " << primePile << " piles!" << endl;
}

void Player :: lose()
{
    cout << "Loser " << endl;
}

void Player :: printPile()
{
    for (int i= 0; i < pile.size(); i++)
         {
             if( i != 0)cout << ",";
             pile[i].showCard();
         }
    //cout << endl;
}

Card Player :: lastCard()
{
    return pile.back();
}

int Player :: getPrimePile()
{
    return primePile;
}

void Player :: resetPile()
{
    primePile =0;
}
