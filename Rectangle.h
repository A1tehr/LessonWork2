//
// Created by villi on 04.04.2020.
//

#pragma once

#include <string>
#include <iostream>
#include "Figure.h"

using namespace std;

class Rectangle : public Figure {
private:
    double side1;
    double side2;
public:
    Rectangle(){
        setName("Rectangle");
        setSides();
    }
    Rectangle(double side1, double side2){
        if(side1 <= 0 || side2 <= 0) throw -1;
        else {
            setName("Rectangle");
            this->side1 = side1;
            this->side2 = side2;
        }
    }
    double getPerimeter() override {
        return 2 * (side1 + side2);
    }
    double getArea() override {
        return side1 * side2;
    }
private:
    void setSides(){
        double temp;
        cout << "Enter side 1: "; cin >> temp;
        temp <= 0 ? throw -1 : side1 = temp;
        cout << "Enter side 2: "; cin >> temp;
        temp <= 0 ? throw -1 : side2 = temp;
    }
};


