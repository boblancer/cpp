//
//  circle.hpp
//  cpp_lab5.2
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//


#ifndef Circle_h
#define Circle_h

#include <iostream>
#include <cmath>

using namespace std;
const double PI =  2.0 * asin(1.0);

class Circle{
public:
    Circle(double = 1.0);
    double calcval() const;
protected:
    double radius;
};


Circle::Circle(double r){
    radius = r;
}

double Circle::calcval(void) const {
    return PI * radius * radius;
}

class Sphere: public Circle{
public:
    Sphere(double = 1.0);
    double calcval(void) const;
protected:
    double radius;
};
Sphere::Sphere(double r){
    radius = r;
}
double Sphere::calcval(void) const {
    return PI * radius * radius * radius * 4/3;
}
#endif /* Circle_h */


