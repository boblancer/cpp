//
//  Word_List.hpp
//  cpp_lab5.1
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//


#ifndef Word_list_h
#define Word_list_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class WordList: public vector<string>{
    
public:
    WordList();
    WordList(int size);
    void print() const;
    void println() const;
    vector<string> searchInitial(char ch) const;
    int countInitial(char ch) const;
    int removeDuplicate();
};

#endif /* Word_list_h */
