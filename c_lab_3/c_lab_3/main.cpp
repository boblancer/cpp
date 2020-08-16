//
//  main.cpp
//  c_lab_3
//
//  Created by sasithorn wu on 2/8/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

const int NUM_WORD = 5;

class WordList{
public:
    void setWord(string word, int index);
    void print() const;
    void sort_s(){
        for(int i = 0; i < NUM_WORD - 1; i++){
            for(int j= 1; j < NUM_WORD; j++){
                if(list[j - 1] > list[j]){
                    temp = list[j];
                    list[j] =  list[j - 1];
                    list[j - 1] = temp;
                }
            }
        }
    }
private:
    string temp = "";
    string list[NUM_WORD];

};
void WordList::setWord(string word, int index){
    if(index >= 0 && index < NUM_WORD){
        list[index] = word;
        cout << "Add \"" << word << "\" at the index " << index << endl;
    }
    else
        cout << "Cannot add word: index is out of range!!! \n\n\n";
}
void WordList::print() const{
    cout << "All words in list: " << endl;
    for(int i = 0; i < NUM_WORD ; i++)
        cout << "\t" << list[i] << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    WordList jack;
    jack.setWord("Hello!", 0);
    jack.setWord("Konichiwa!", 1);
    jack.setWord("Hallo!", 2);
    jack.setWord("Ciao!", 3);
    jack.setWord("Ni Hao!", 4);
    jack.setWord("Alo!", 5);
    jack.print();
    jack.sort_s();
    jack.print();

}

//enum Order {ASCENDING = 0 , DESCENDING = 1};
//
//class AutoSortedWordList{
//public:
//    AutoSortedWordList(){
//        cout << "Class initialized";
//    }
//    void setWord(string word, int index);
//    void print() const;
//    void setOrderOption(Order new_order){
//        order = new_order;
//        sort_s();
//    }
//
//private:
//    string list[NUM_WORD];
//    Order order = ASCENDING;
//    void sort_s();
//    void swap(string a , string b);
//
//};
//
//void AutoSortedWordList::setWord(string word, int index){
//    if(index >= 0 && index < NUM_WORD){
//        list[index] = word;
//        cout << "Add \"" << word << "\" at the index " << index << endl;
//        sort_s();
//        
//    }
//    else
//        cout << "Cannot add word: index is out of range!!! \n\n\n";
//}
//void AutoSortedWordList::print() const{
//    cout << "All words in list: " << endl;
//    for(int i = 0; i < NUM_WORD ; i++)
//        cout << "\t" << list[i] <<endl;
//}
//void AutoSortedWordList::sort_s(){
//    string temp;
//    if(order == ASCENDING){
//        for(int i = 0; i < NUM_WORD - 1; i++)
//            for(int j= 1; j < NUM_WORD; j++)
//                if(list[j - 1] > list[j]){
//                    temp = list[j];
//                    list[j] = list[j - 1];
//                    list[j - 1] = temp;
//                }
//    }
//    else{
//        for(int i = 0; i < NUM_WORD - 1; i++)
//            for(int j= 1; j < NUM_WORD; j++)
//                if(list[j - 1] < list[j]){
//                    temp = list[j];
//                    list[j] = list[j - 1];
//                    list[j - 1] = temp;
//                }
//    }
//}
//void AutoSortedWordList::swap(string a , string b){
//    cout << "this a and b" << a << b << endl;
//    string temp;
//    temp = a;
//    a =  b;
//    b = temp;
//}
//
//int main(){
//    AutoSortedWordList jack;
//    jack.setOrderOption(ASCENDING);
//    jack.setWord("Ni Hao!", 4);
//    jack.print();
//    jack.setWord("Hello!", 4);
//    jack.print();
//    jack.setWord("Konichiwa!", 4);
//    jack.print();
//    jack.setWord("Hallo!", 4);
//    jack.print();
//    jack.setWord("Ciao!", 4);
//    
//    
//    
//
//    jack.print();
//
//
//    return 0;
//}
