//
//  Deck.hpp
//  lab4
//
//  Created by sartsawatj on 2/15/19.
//  Copyright © 2019 boblancer. All rights reserved.
//
#ifndef Deck_hpp
#define Deck_hpp

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Card.hpp"
#include <algorithm>

using namespace std;

class Deck{
public:
    Deck();
    int getNumCards() const;
    Card* drawCard();
    void shuffle();
    void clear();
private:
    vector<Card*> cards;
    void swapCards(int i , int j);
};

Deck::Deck(){
    for(int r = 13; r >= 1; --r)
        for(int s = 3; s >= 0; --s)
            cards.push_back(new Card( (Rank) r, (Suit) s));
    
}
int Deck::getNumCards() const{
    return cards.size();
}
Card* Deck::drawCard(){
    Card* cardPtr = cards.back();
    cards.pop_back();
    return cardPtr;
}
int myrandom (int i) { return std::rand()%i;}
void Deck::shuffle(){
    srand ( unsigned ( std::time(0) ) );
    random_shuffle ( cards.begin(), cards.end() ,myrandom);
    //cout << "foo";
}

void Deck::swapCards(int i , int j){
    Card* temp = cards[i];
    cards[i] = cards[j];
    cards[j] = temp;
}

void Deck::clear(){
    while( cards.size() > 0){
        delete cards.back();
        cards.pop_back();
    }
}
#endif /* Deck_hpp */
