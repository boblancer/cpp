//
//  main.cpp
//  cpp_lab5.1
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include "Word_List.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    const int SIZE = 3;
    WordList strikerList(3);
    
    strikerList[0] = "Messi";
    strikerList[1] = "Neymar";
    strikerList[2] = "Balotelli";
    strikerList.pop_back();
    strikerList.push_back("Tevez");
    strikerList.print();
    
    WordList defenderList;
    defenderList.push_back("Silva");
    defenderList.push_back("Puyol");
    defenderList.println();

    strikerList.push_back("Jack_ma");
    strikerList.push_back("foo");
    strikerList.push_back("Jack_ma");
    strikerList.push_back("bar");
    vector<string> foo = strikerList.searchInitial('M');
    cout << foo[0] << endl;;
    cout << strikerList.countInitial('N') << endl;
    strikerList.println();
    cout << strikerList.removeDuplicate() << endl;
    strikerList.println();
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
