//
//  main.cpp
//  cpp_lab5.5
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include "acc.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    Account a1 = Account(10, "jack");
    SavingAcc a2 = SavingAcc(10, "jack foo", 1.2);
    CheckingAcc a3 = CheckingAcc(10, "jack foo", 300);
    a1.withdraw(5);
    a1.withdraw(20);
    
    cout << a2.calcInterest(10);
    return 0;
}
