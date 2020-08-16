//
//  main.cpp
//  c++_lab_1
//
//  Created by sasithorn wu on 1/18/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//const int num1 = 123;
//const int num2 = 45;
//
//int main(int argc, const char * argv[]) {
//    cout << 123456789 << endl;
//    cout << "---------" << endl;
//    cout << setw(6) << num1 << num2 << endl;
//    cout << setw(4) << num1 << num2 << endl;
//    cout << setw(2) << num1 << num2 << endl;
//
//    cout << setw(2) << num1 << setw(5) << num2 << endl;
//
//    cout << left <<setw(2) << num1 << setw(5) << num2 << endl;
//    cout << right <<setw(2) << num1 << setw(5) << num2 << endl;
//}

//const double val = 12.3456;
//int main(){
//    cout << "Original" << endl;
//    cout << val << endl;
//    cout <<"--------"<< endl;
//    cout << "2-digit precision" << endl;
//    cout << setprecision(2) << val << endl << endl;
//
//    cout << "4-digit precision" << endl;
//    cout << setprecision(4) << val << endl << endl;
//
//    cout << "8-digit precision" << endl;
//    cout << setprecision(8) << val << endl << endl;
//
//    cout << "scientific, fixed 8-digit precision" << endl;
//    cout << scientific<< setprecision(8) << val << endl << endl;
//
//    cout << "clear all flags" << endl;
//    cout.unsetf(ios_base:: fixed);
//    cout.unsetf(ios_base:: scientific);
//    cout << val << endl << endl;
//}

//int main(){
//    int x, y;
//    cout << "Enter two integers x and y in hexadecimal format: " << endl;
//    cin >> hex >> x >> y;
//
//    cout << endl;
//    cout << "hex: " << endl;
//    cout << hex << "X = " << x << "\ty = " << y << endl;
//
//    cout << "hex + showbase + uppercase: " << endl;
//    cout << uppercase << showbase;
//    cout << hex << "X = " << x << "\ty = "  << y << endl;
//
//    cout << "hex + showbase + nouppercase: " << endl;
//    cout << nouppercase;
//    cout << hex << "X = " << x << "\ty = "  << y << endl;
//
//    cout << "oct + showbase :" << endl;
//    cout << oct << showbase << "x = " << x << "\ty = "<< y << endl << endl;
//
//    cout << "dec:" << endl;
//    cout << dec << "x =" << x << "\ty = " << y << endl << endl;
//
//
//}

int GCD(int a, int b, size_t len){
    string big_chungus = to_string(a) + " mod " + to_string(b);
    cout << right << setw(len)<< big_chungus <<  " = "<< a%b << endl;
    if (a % b == 0){
        return b ;
    }
    return GCD(b , a  %  b, len);
}

int main(){
    int a, b, c;
    cout << "Enter two integer" << endl;
    cin >> a >> b;
    string big_chungus = to_string(a) + " mod " + to_string(b);
    size_t l;
    l = big_chungus.length();
    c = GCD(a, b, l);
    cout << "GCD of" << a << "and" << b <<"is: " << c << endl;

}

void calendar(int input){
    string month[13] = {"", "January", "Febuary" , "March" , "April", "May",
        "June" , "July", "August", "September", "October", "November" ,"December"};
    string day[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int day_in_month[13] = {0, 31 , 28, 31 , 30, 31, 30, 31 ,31 ,30, 31 ,30 ,31};

    int start_date = 2;
    for(int i = 0; i < input ; i++){
        start_date += day_in_month[i];
    }
    cout << start_date << endl;
    
        start_date =  (start_date % 7);
    cout << start_date << endl;
    cout << month[input] << " 2019" << endl;

    for(int i = 0; i < 7; i++){
        cout << day[i] << " ";
    }

    cout << endl;


    for(int i = 0; i < start_date; i++)
        cout << "    ";

    for(int i = 1; i < day_in_month[input] ; i++){
        cout << right << setw(3) << i << " ";
        if((i + start_date ) % 7 == 0){
            cout << endl;
        }
    }

}

int main(){
    int input;
    cout << "Enter a month between 1 to 12: "<< endl;
    do{
    cin >> input;
    if(input <= 0 || input >= 13)
        cout << "Error : Invalid output" << endl;
        cout << "Enter a month between 1 to 12: "<< endl;
    }while(input <= 0 || input >= 13);

    calendar(input);
}
