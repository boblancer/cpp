//
//  main.cpp
//  RandomInt
//
//  Created by sasithorn wu on 2/8/19.
//  Copyright © 2019 boblancer. All rights reserved.
//
#include "RandomIntGenerator.hpp"
#include <iostream>
using namespace std;

void printRandomSequence(RandomIntGenerator& randGen, int stopVal){
    int val;
    cout << "A squence of random integers in the range["
        << randGen.getMinVal() << ", "
    << randGen.getMaxVal() << "]" << endl;
    do{
        val = randGen.gen();
        cout << val << " ";
    }while (val != stopVal);
    cout << "\n\n\n" ;
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int val;
    RandomIntGenerator intRand(0,120);
    printRandomSequence(intRand, 0);
    
    intRand.setMinMax(-50, 50);
    cout << intRand.gen();
    printRandomSequence(intRand, -50);
    return 0;
}
