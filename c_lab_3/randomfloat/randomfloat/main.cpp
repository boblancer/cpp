//
//  main.cpp
//  randomfloat
//
//  Created by sasithorn wu on 2/8/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include <climits>
#include <ctime>
#include <cstdlib>
using namespace std;

class RandomFloatGenerator{
public:
    RandomFloatGenerator();
    RandomFloatGenerator(float min, float max);
    float gen() const;
private:
    float max_val;
    float min_val;
};

float RandomFloatGenerator::gen() const{
    return ((float(rand()) / float(RAND_MAX)) * (max_val - min_val)) + min_val;
}
void printRandomSequence(RandomFloatGenerator& randGen, float stopVal){
    float val;
    
    do{
        val = randGen.gen();
        cout << val << " ";
    }while (val < stopVal);
    cout << "\n\n\n" ;
    
}
RandomFloatGenerator::RandomFloatGenerator(float min, float max){
    max_val = max;
    min_val = min;
    srand(time(NULL));
    
}
int main(int argc, const char * argv[]) {
    int val;
    RandomFloatGenerator Rand(1.1,2.2);
    printRandomSequence(Rand, 1.2);
    
    
    return 0;;
}
