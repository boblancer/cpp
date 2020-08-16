//
//  main.cpp
//  cpp_lab5.2
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include "circle.hpp"
#include "cylinder.hpp"

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    Circle circle_1, circle_2(2);
    Cylinder cylinder_1(3,4);
    
    cout << "The area of circle_1 is " << circle_1.calcval() << endl;
    cout << "The area of circle_2 is " << circle_1.calcval() << endl;
    cout << "The volume of cylinder" << cylinder_1.calcval() << endl;
    
    circle_1 = cylinder_1;
    
    cout << "\nThe area of the circle_1 is now " << circle_1.calcval() << endl;
    Sphere s1(10);
    cout << "\nThe area of the sphere is now " << s1.calcval() << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
