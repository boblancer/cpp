//
//  main.cpp
//  C++_lab_2
//
//  Created by sasithorn wu on 1/25/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]) {
    string input;
    float val, total = 0;

    while(1){
        cout << "Enter integer value (0 to quit): " ;
        cin >> input;
        val = atoi (input.c_str() );
        if( val == 0 )
            break;
        total += val;
        cout << "Total value = " << fixed << setprecision(4) <<total << "\n\n";
    }
}

//const int NUMSTR = 10;
//
//void showAllStrings(string list[], int numStr){
//    for(int i = 0; i < numStr; i++)
//        cout << "\t" << list[i] << endl;
//}
//
//void swapString(string& str1, string& str2){
//    string tempStr = str1;
//    str1 = str2;
//    str2 = tempStr;
//
//}
#include <string>
//
//void sortString( string list[], int numStr){
//    for(int i = 0; i < numStr - 1; i++)
//        for(int j = 1; j < numStr;j++)
//            if(list[j - 1] < list[j])
//                swapString(list[j], list[j - 1]);
//}
//
//int main(){
//    string nameList[NUMSTR];
//    cout << "Enter " << NUMSTR << " lines of string: " << endl;
//    for(int i = 0; i < NUMSTR; i++)
//        getline( cin, nameList[i]);
//
//    cout << "\nThe input string are: " << endl;
//    showAllStrings(nameList, NUMSTR);
//
//    cout << "\nSorting: " << endl;
//    sortString(nameList, NUMSTR);
//    showAllStrings(nameList, NUMSTR);
//
//}


//void fourLetter(string& original){
//    int begin = 0,  count = 0;
//
//    for(int i = 0; i < original.size(); i++) {
//        cout << original <<" and " <<original[i] << endl;
//        cout << "begin = "<< begin << " count = " << count << endl;
//        if(count == 4 && !isalpha(original[i])){
//            cout << "replace" << endl;
//            if(isupper(original[begin]))
//                original.replace(begin, 4, "Love");
//            else
//                original.replace(begin, 4, "love");
//        }
//
//        if (isalpha(original[i])){
//            if(count == 0)
//                begin = i;
//            count++;
//        }
//        else
//            count = 0;
//
//    }
//}
//
//
//int main(){
//    string command = "", str;
//
//
//    while(command != "Quit"){
//        cout << "Enter a line of text " << endl;
//        getline(cin, str);
//        str = str + " ";
//        fourLetter(str);
//        cout << str << endl;
//    }
//
//}

//string robust_AF(string input){
//    string output = "";
//    for(char& c : input) {
//        if(isnumber(c))
//            output += c;
//    }
//    return output;
//}
//int main(){
//    int check = 0;
//    string str, response;
//    while(1){
//        cout << "Enter an integer and press return" << endl;
//        getline(cin, str);
//        cout << "You enter " << robust_AF(str) << ". Is ThaT cORrEct???? (yes/no)" << endl;
//        getline(cin, response);
//        if (response == "yes")
//            return 0;
//    }
//}
//string reverse(string str){
//    string new_str = "";
//    for(char& c: str ){
//        new_str = c + new_str;
//
//    }
//    return new_str;
//}
//bool palindrome(string str){
//    string extract = "", first_half, second_half;
//    for(char& c: str){
//        if(isalpha(c) or isnumber(c))
//            extract += tolower(c);
//    }
//    cout << extract;
//    if(extract.length() % 2 == 0){
//        first_half = extract.substr(0, extract.length() / 2);
//        second_half = extract.substr(extract.length() / 2, extract.length());
//        //cout << first_half << " and " << second_half << endl;
//        //cout << first_half << " and " << reverse(second_half) << endl;
//        if(first_half == reverse(second_half))
//            return true;
//        else
//            return false;
//    }else{
//        first_half = extract.substr(0, extract.length() / 2);
//        second_half = extract.substr((extract.length() / 2) + 1, extract.length());
//        //cout << first_half << " and " << second_half << endl;
//        //cout << first_half << " and " << reverse(second_half) << endl;
//        if(first_half == reverse(second_half))
//            return true;
//        else
//            return false;
//    }
//
//}
//int main(){
//    string input;
//    cout << "Enter something" << endl;;
//    getline(cin, input);
//    if(palindrome(input))
//        cout << "yes";
//    else
//        cout << "no";
//}
