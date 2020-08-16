//
//  RandomIntGenerator.cpp
//  RandomInt
//
//  Created by sasithorn wu on 2/8/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include "RandomIntGenerator.hpp"

RandomIntGenerator::RandomIntGenerator(){
    *this = RandomIntGenerator(0, INT_MAX);
    
}
RandomIntGenerator::RandomIntGenerator(int min, int max){
    setMinMax(min, max);
    srand(time(NULL));
    
}
void RandomIntGenerator::setMinMax(int min, int max){
    min_val = min;
    max_val = max;
}
int RandomIntGenerator::getMinVal() const{
    return min_val;
}
int RandomIntGenerator::getMaxVal() const{
    return max_val;
}
int RandomIntGenerator::gen() const{
    if(min_val <= 0)
        return (rand() % (max_val - min_val)) + min_val - 1;
    else
        return (rand() % (max_val - min_val)) + min_val + 1;
}
