//
//  Card.cpp
//  Prog 1
//
//  Created by Taylor Bui on 1/29/19.
//  Copyright © 2019 Taylor Bui. All rights reserved.
//


#include "Card.h"


Card :: Card()
{
    rank = 'Z';
    suit = 'Z';
    faceUp = true;
}

Card :: Card(char rank, char suit)
{
    (*this).rank = rank;
    (*this).suit = toupper(suit);
    faceUp = true;
}

void Card :: setCard(char rank, char s)
{
    (*this).rank = rank;
    suit =  toupper(s);
}

int Card :: getValue()
{
    if(rank == 'T' || rank == 'Q' || rank == 'K' || rank == 'J')return 10;
    if(rank == '9')return 9;
    if(rank == '8')return 8;
    if(rank == '7')return 7;
    if(rank == '6')return 6;
    if(rank == '5')return 5;
    if(rank == '4')return 4;
    if(rank == '3')return 3;
    if(rank == '2')return 2;
    if(rank == 'A')return 1;
    cout << "Rank error returning  " ;
    return 0;

}

void Card:: showCard()
{
    if(faceUp == true)
    {
        if( rank == 'T')
        { cout << 10 << suit << " ";}
        else{
            cout << rank << suit << " ";}
    }else
        cout << "??" << endl;
}

void Card::flip()
{
    if(faceUp == true)faceUp = false;
    if(faceUp == false)faceUp = true;
}

bool Card :: getFace()
{
    return faceUp;
}

/*
 private:
 char ranks;
 char suit;
 bool faceUp;
 public:

 void display();
 int value();
 void flip();

*/
