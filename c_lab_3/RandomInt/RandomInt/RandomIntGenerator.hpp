//
//  RandomIntGenerator.hpp
//  RandomInt
//
//  Created by sasithorn wu on 2/8/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#ifndef RandomIntGenerator_h
#define RandomIntGenerator_h
#include <climits>
#include <ctime>
#include <cstdlib>

class RandomIntGenerator{
public:
    RandomIntGenerator();
    RandomIntGenerator(int min, int max);
    void setMinMax(int min, int max);
    int getMinVal() const;
    int getMaxVal() const;
    int gen() const;
private:
    int max_val;
    int min_val;
};


#endif /* RandomIntGenerator_h */
