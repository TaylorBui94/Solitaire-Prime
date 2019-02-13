//
//  main.cpp
//  Prog 1
//
//  Created by Taylor Bui on 2/12/19.
//  Copyright © 2019 Taylor Bui. All rights reserved.
//

#include <iostream>
#include "deck.h"
#include "card.h"
#include "player.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    int choice;
    Deck d;
    Player p;
   
    while(true)
    {
        cout << endl <<"Welcome to Solitaire Prime!" << endl;
        cout << "1) New Deck" << endl;
        cout << "2) Display Deck" << endl;
        cout << "3) Shuffle Deck" << endl;
        cout << "4) Play Solitaire Prime" << endl;
        cout << "5) Exit" << endl;
        
        cin >> choice;
        
        switch(choice)
        {
            case 1:
            {
                d.reset();
                cout <<"Deck has been created!" << endl;
                break;
            }
            case 2:
            {
                d.showDeck();
                break;
            }
            case 3:
            {
                d.shuffle();
                cout << "Deck has been shuffled." << endl;
                break;
            }
            case 4:
            {
            cout << "Playing Solitaire Prime!!!" << endl;
               while ( d.deckSize() > 0)
               {
                if (p.isPrime() == true)
                {
                    p.printPile();
                    cout <<"Prime:" << p.sumPile() <<endl;
                    p.clearPile();
                    if(d.deckSize() == 1)
                    {
                        p.win();
                        break;
                    }
                }else
                {
                    p.addCard(d.deal());

                    if(d.deckSize() ==0)
                    {
                        p.printPile();
                        p.lose();
                    }
                }
               }
                p.resetPile();
                break;
            }
            default:
                break;
        }
        if (choice == 5)
        {
            break;
        }
    }
    return 0;
}
