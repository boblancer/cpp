//
//  Card.hpp
//  lab4
//
//  Created by sartsawatj on 2/15/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp
#include <iostream>
using namespace std;
enum Rank {ACE = 1, TWO, THREE, FOUR , FIVE , EIX ,SVEN ,EIGHT, NINE,TEN,
    JACK, QUEEN, KING};

enum Suit {CLUB, DIAMOND, HEART , SPADE};

class Card{
public:
    Card(Rank r, Suit s): rank(r), suit(s){}
    Rank getRank() const {return rank; }
    Suit getSuit() const {return suit; }
    void show() const;
private:
    Rank rank;
    Suit suit;
    
};

void Card::show() const {
    switch( rank ){
        case ACE:
            cout << 'A'; break;
        case JACK:
            cout << 'J'; break;
            break;
        case QUEEN:
            cout << 'Q'; break;
            break;
        case KING:
            cout << 'K'; break;
            break;
        case TEN:
            cout << 'X'; break;
            break;
        default: cout << (char)('0' + rank); break;
    }
    switch( suit ){
        case CLUB:
            cout << 'C'; break;
        case DIAMOND:
            cout << 'D'; break;
        case HEART:
            cout << 'H'; break;
        case SPADE:
            cout << 'S'; break;
    }
}


//#include <stdio.h>

#endif /* Card_hpp */
