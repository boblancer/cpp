//
//  main.cpp
//  Cpp_lab4.2
//
//  Created by sartsawatj on 2/15/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;
//class Tokenizer{
//public:
//    Tokenizer(const string& init_delim = " .,");
//    void setDelimiter(string new_delim);
//    vector<string> tokenize(string& text) const;
//private:
//    string delimiters;
//};
//vector<string> Tokenizer::tokenize(string& text) const{
//    vector<string> temp;
//    string token;
//    size_t pos = 0;
//    for(int i = 0; i < text.size() - 1; i++){
//        //cout << i << text[i] << delimiters.find(text[i])<< endl;
//        if( delimiters.find(text[i]) <= 2 ){
//            //cout << text.substr(pos, i - pos) << pos << endl;
//            token = text.substr(pos, i - pos);
//            temp.push_back(token);
//            pos = i + 1;
//            cout << token << endl;
//
//        }
//
//    }
////    while ((pos = text.find(delimiters)) != string::npos) {
////        token = text.substr(0, pos);
////        cout << token << std::endl;
////        temp.push_back(token);
////        text.erase(0, pos + delimiters.length());
////    }
////    temp.push_back(text);
////    cout << text;
//    return temp;
//}
//void Tokenizer::setDelimiter(string new_delim){
//    delimiters = new_delim;
//}
//Tokenizer::Tokenizer(const string& init_delim){
//    delimiters = init_delim;
//}
//int main(int argc, const char * argv[]) {
//    string test = "you can't.see,me.REEEE";
//    Tokenizer converter = Tokenizer(" .,");
////    converter.setDelimiter(".");
//    converter.tokenize(test);
//    return 0;
//}

void magik(){
    vector<int> magic;
    int i = 1, n = 0;
    
    while(i != 0){
        cout << "please enter";
        cin >> i;
        cout << i << " was entered "<< endl;;
        if( i == 0)
            break;
        magic.push_back(i);
    }
    float diff = sqrt(magic.size()) - (int)sqrt(magic.size());
    cout << diff;
    if(diff > 0){
        cout << "not magik";
        return;
    }else{
        n  = sqrt(magic.size());
    }
    for(int i = 1; i < magic.size(); i++){
        if (!(find(magic.begin(), magic.end(), i)!= magic.end())){
            cout << i;
            cout << "not magik";
            return;
        }
            
    }
    vector<int> columsum;
    vector<int> rowsum;
    int diag1 = 0, diag2 = 0;
    vector<vector<int>> matrix;
    vector<int> emptyVec;
    cout << endl;
    int count = 0, sum = 0, matrix_index = 0;
    matrix.push_back(emptyVec);
    for(int i = 0; i < magic.size(); i++){
        matrix[matrix_index].push_back(magic[i]);
        cout << magic[i] << " ";
        sum += magic[i];
        if(count == n - 1){
            cout << "sum : " <<sum << endl;
            rowsum.push_back(sum);
            sum = 0;
            count = 0;
            matrix_index += 1;
            matrix.push_back(emptyVec);
            
        }
        else
            count += 1;
    }
    count = 0;
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j< n; j++){
            sum += matrix[j][i];
            if(i == j)
                diag1 += matrix[j][i];
            
        }
    
        columsum.push_back(sum);
        sum = 0;
    }
    cout << "diag sum"<< diag1<< endl;
    
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - 1; j >= 0; j--){
            if(i == j)
                diag2 += matrix[i][j];
            
        }
    }
    cout << "diag2 sum"<< diag2 << endl;
    cout <<"row sum";
    for(int i = 0; i < n ; i++ ){
        cout << rowsum[i]  << " " ;
    }
    cout <<"col sum";
    for(int i = 0; i < n ; i++ ){
        cout << columsum[i] << " ";
    }
     //if (std::find(v.begin(), v.end(),value)!=v.end())
}
int main(){
    magik();
    return 0;
}
