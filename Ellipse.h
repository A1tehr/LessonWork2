//
// Created by villi on 04.04.2020.
//

#pragma once

#include <string>
#include <iostream>
#include "Figure.h"

using namespace std;

class Ellipse : public Figure {
private:
    const double PI = 3.14;
    double side1;
    double side2;
public:
    Ellipse(){
        setName("Ellipse");
        setSides();
    }
    Ellipse(double side1, double side2){
        if(side1 <= 0 || side2 <= 0) throw -1;
        else {
            setName("Ellipse");
            this->side1 = side1;
            this->side2 = side2;
        }
    }
    double getPerimeter() override {
        return 4 * ((PI * side1 * side2 + (side1 - side2)) / (side1 + side2));
    }
    double getArea() override {
        return PI * side1 * side2;
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


