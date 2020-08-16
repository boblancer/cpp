//
//  main.cpp
//  c++_lab_5
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#include <iostream>
#include <vector>
#include "KERNEL.h"

using namespace std;
void printVector(vector<double>& vec){
    for(const auto& elem: vec)
        cout << elem << " ";
    cout << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    const int SIZE = 10;
    vector<double> src(SIZE), dst(SIZE);
    for(int i = 0; i < SIZE; i++){
        src[i] = i;
    }
    cout << "Original vector:\n";
    printVector(src);
    
    //create different kernel
    const int NUM_KERNEL = 3;
    vector<TransformKernel*> kernelList(NUM_KERNEL);
    kernelList[0] = new CopyKernel();
    kernelList[1] = new LinearKernel(2, 3);
    kernelList[2] = new LinearKernel(-1, 1);
    
    //transform vector
    for(int k = 0; k < NUM_KERNEL; k++){
        kernelList[k]->printKernelName();
        for (int i = 0; i < src.size(); i++)
            dst[i] = kernelList[k]->transform(src[i]);
        printVector(dst);
    }
    
    for(int k = 0; k < NUM_KERNEL; k++)
        delete kernelList[k];
    std::cout << "Hello, World!\n";
    kernelList[0] = new PolynomialKernel(2, dst);
    //PolynomialKernel::count = 0;
    kernelList[0]->printKernelName();
    
    for (int i = 0; i < src.size(); i++)
        dst[i] = kernelList[0]->transform(src[i]);
    printVector(dst);
    
    return 0;
}
