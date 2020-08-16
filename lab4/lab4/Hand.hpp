//
//  Hand.hpp
//  lab4
//
//  Created by sartsawatj on 2/15/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#ifndef Hand_hpp
#define Hand_hpp

#include <vector>
#include <iostream>
#include "Deck.hpp"
using namespace std;

class Hand{
public:
    void drawCard(Deck& deck, int num);
    void showAllCards() const;
    void clear();
private:
    vector<Card*> cards;
};

void Hand::showAllCards() const{
    for(auto const& card: cards){
        card->show();
        cout << " ";
    //cout << "foo";
    }
}
void Hand::drawCard(Deck& deck, int num){
    for( int n = 0; n < num; ++n){
        if(deck.getNumCards() > 0)
            cards.push_back(deck.drawCard());
    }
}
void Hand::clear(){
    while (cards.size() > 0 ){
        delete cards.back();
        cards.pop_back();
    }
}
#endif /* Hand_hpp */
