//
//  Course.hpp
//  Cpp_lab6.1
//
//  Created by sartsawatj on 3/1/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Course{
public:
    Course( string ttl = "-", string cde = "-", int cred = 0);
    void write(ostream& strm = cout) const;
    void read(istream& strm = cin);
private:
    string title;
    string code;
    int credit;
};
Course::Course(string ttl, string cde, int cred)
:title(ttl), code(cde), credit(cred) {

}
void Course::write(ostream& strm) const{
    string cred = " credit";
    if(credit > 1 ) cred += "s";
    
    strm << code << ", " << title << ", " << credit << cred << "\n";
    
}
void Course::read(istream& strm){
    cout << "Called read ";
    string line = "";
    strm >> line;
    cout << line << "\n foo\n";
    //getline(strm, line);
    if(strm.fail()){
        cout << "fail";
        return;
    }
    
    //cout << "\n" << *find(line.begin(), line.end(), ',' );
    //cout << "foo";
    
}
#endif /* Course_h */
