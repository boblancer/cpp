//
//  main.cpp
//  c++read
//
//  Created by sartsawatj on 3/14/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here..
    fstream file; 
    file.open("input.txt");
    
    file << "jack foo";
    std::cout << "Hello, World!\n";
    return 0;
}
