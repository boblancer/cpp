//
//  KERNEL.h
//  c++_lab_5
//
//  Created by sartsawatj on 2/22/19.
//  Copyright © 2019 boblancer. All rights reserved.
//

#ifndef KERNEL_h
#define KERNEL_h

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class TransformKernel{
public:
    virtual void printKernelName() const = 0;
    virtual double transform(double inVal) const = 0;
    
};
class CopyKernel: public TransformKernel{
public:
    void printKernelName() const{
        cout << "\nCopy kernel: \n";
    }
    double transform(double inVal) const{
        return inVal;
    }
};

class LinearKernel: public TransformKernel{
public:
    LinearKernel(double mVal = 0, double cVal = 0): m(mVal), c(cVal){
    }
    
    void printKernelName() const{
        cout << "\nLinear kernel y = " << m << "* + " << c << ":n";
    }
    double transform(double inVal) const{
        return m* inVal + c;
    }
private:
    double m, c;
    
};

class PolynomialKernel: public TransformKernel{
public:
    PolynomialKernel(double xVal = 0, vector<double> coefVal = {}): x(xVal), coef(coefVal){
    }
    void printKernelName() const{
        cout << "Polynomial kernel y = " << "* nx^i" << " :n ";
    }
//    double transform(double inVal) const{
//        return 0;
//    }
    
    double transform(double inVal) const{
        return coef[inVal] * pow(x, inVal);
        //cout << inVal << " " << x << " " << count << endl;;
    }
private:
    double x;
    vector<double> coef;
};
#endif /* KERNEL_h */
