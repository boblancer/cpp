//
//  Word_List.cpp
//  cpp_lab5.1
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include "Word_List.hpp"
#include <algorithm>

WordList::WordList(){
    
}

WordList::WordList(int size): vector<string>(size){
    
}

void WordList::print()const{
    for(const auto& word: *this)
        cout << word << " ";
}

void WordList::println() const{
    print();
    cout << endl;
}
//vector<string> searchInitial(char ch) const;
//int countInitial(char ch) const;
//int removeDuplicate();

vector<string> WordList::searchInitial(char ch) const{
    vector<string> temp;
    for(const auto& word: *this)
        if(word[0] == ch)
            temp.push_back(word);
    return temp;
}

int WordList::countInitial(char ch) const{
    int count = 0;
    for(const auto& word: *this)
        if(word[0] == ch)
            count++;
    return count;
}

int WordList::removeDuplicate(){
    int count = this->size();
    //this = unique_copy(this->begin(), this->end(), this->begin());
    sort( this->begin(), this->end() );
    this->erase( unique( this->begin(), this->end() ), this->end() );
    
    return count - this->size();
}
