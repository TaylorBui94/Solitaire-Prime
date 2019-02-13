//
//  Deck.cpp
//  Prog 1
//
//  Created by Taylor Bui on 2/12/19.
//  Copyright © 2019 Taylor Bui. All rights reserved.
//

#include "Deck.h"

Deck :: Deck()
{
    char suits[] = {'S', 'H', 'D', 'C'};
    char rank[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    
    for (int i = 0; i <4; i++)
    {
        for( int j = 0; j <13; j++)
        {
            deck.push_back(Card(rank[j], suits[i]));
        }
    }
}

void Deck :: reset()
{
    char suits[] = {'S', 'H', 'D', 'C'};
    char rank[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    int temp = deck.size();
    
    for ( int i = 0; i < temp; i++)
    {
        deck.pop_back();
    }
    
    for (int i = 0; i <4; i++)
    {
        for( int j = 0; j <13; j++)
        {
            deck.push_back(Card(rank[j], suits[i]));
        }
    }
}

void Deck :: showDeck()
{
    int count = 0;
    for(int i = 0; i< deck.size(); i++)
    {
        if(deck[i].getFace() == false)
        {
            deck[i].flip();
        }
        deck[i].showCard();
        count ++;
        if(count %13 == 0)
        {
            cout << endl;
        }
    }
}

void Deck :: shuffle()
{
    srand(time(0));
    
    for (int i= 0; i < 200; i++)
    {
        int x = rand()%52;
        int y = rand()%52;
        Card temp = deck[x];
        deck[x] = deck[y];
        deck[y] = temp;
    }
}

Card Deck :: deal()
{
    Card c = deck.front();
    deck.erase(deck.begin());
    return c;
}

int Deck :: deckSize()
{
    return deck.size();
}

    //vector<Card> deck;
