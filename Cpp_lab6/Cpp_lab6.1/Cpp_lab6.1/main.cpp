//
//  main.cpp
//  Cpp_lab6.1
//
//  Created by sartsawatj on 3/1/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Course.hpp"
#include <fstream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    vector<Course> courses;
    courses.push_back(Course("Object-oriented Concepts and Programming", "13016209", 3));
    courses.push_back(Course("Object-oriented Programming Laboratory", "13016210", 1));
    courses.push_back(Course("Discrete Mathematics", "13016206", 3));
    
    cout << "Existing courses: " << endl;
    for(int i = 0; i < courses.size(); ++i){
        courses[i].write();
    }
//    filebuf fb;
//    if(fb.open("extra.txt", ios::in)){
//        cout << "Good\n";
//    }
    ifstream file;
    file.open("extra.txt");

    courses.push_back(Course());
    courses[3].read(file);
    //courses[3].write();
    return 0;
}
