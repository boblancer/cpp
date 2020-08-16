//
//  cylinder.hpp
//  cpp_lab5.2
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#ifndef cylinder_h
#define cylinder_h

#include "circle.hpp"

using namespace std;

class Cylinder : public Circle{
public:
    Cylinder(double r = 1.0, double l = 1.0): Circle(r), length(l){}
    double calcval()const;
protected:
    double length;
};

double Cylinder::calcval(void) const{
    return length * Circle::calcval();
}
#endif /* cylinder_h */
