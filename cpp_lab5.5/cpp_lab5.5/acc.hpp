//
//  acc.hpp
//  cpp_lab5.5
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#ifndef acc_hpp
#define acc_hpp

#include <iostream>
#include <cmath>
#include <string>


using namespace std;

class Account{
public:
    Account(double n, string name);
    void deposit(double n);
    void withdraw(double n);
    int getbalance();
    
protected:
    double balance;
    string name;
};


Account::Account(double n, string name){
    balance = n;
    name = name;
}
void Account::deposit(double n){
    balance += n;
}
void Account::withdraw(double n){
    if(n > balance){
        cout << "exceeding balace";
    }
    else
        balance -= n;
}

int Account::getbalance(){
    return balance;
}


class SavingAcc: public Account{
public:
    SavingAcc(double n, string name, double interest_rate):Account( n, name){
        balance = n;
        name = name;
        interest = interest_rate;
    }
    double calcInterest(int year);
protected:
    double interest;
};

double SavingAcc::calcInterest(int year){
    return balance * (1 * interest) * year;
}

class CheckingAcc: public Account{
public:
    CheckingAcc(double n, string name, double fee_in):Account( n, name){
        balance = n;
        name = name;
        fee = fee_in;
    }
    void withdraw(double n){
        Account::withdraw(n + fee);
    }
    
    
protected:
    double fee;
};

#endif
