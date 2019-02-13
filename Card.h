//
//  Card.hpp
//  Prog 1
//
//  Created by Taylor Bui on 1/29/19.
//  Copyright © 2019 Taylor Bui. All rights reserved.
//

#ifndef Card_h
#define Card_h
#include <iostream>
using namespace std;

class Card
{

public:
    Card();
    Card(char, char);
    int getValue();
    void flip();
    void setCard(char,char);
    void showCard();
    bool getFace();
    
private:
    char rank;
    char suit;
    bool faceUp;
};

#endif /* Card_h */
