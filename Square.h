//
// Created by villi on 04.04.2020.
//

#pragma once

#include <string>
#include <iostream>
#include "Figure.h"

using namespace std;

class Square : public Figure {
private:
    double side;
public:
    Square(){
        setName("Square");
        setSides();
    }
    Square(double side){
        if(side <= 0 ) throw -1;
        else {
            setName("Square");
            this->side = side;
        }
    }
    double getPerimeter() override {
        return side * 4;
    }
    double getArea() override {
        return side * side;
    }
private:
    void setSides(){
        double temp;
        cout << "Enter side: "; cin >> temp;
        temp <= 0 ? throw -1 : side = temp;
    }
};


