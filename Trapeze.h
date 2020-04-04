//
// Created by villi on 04.04.2020.
//

#pragma once

#include <string>
#include <iostream>
#include "Figure.h"

using namespace std;

class Trapeze : public Figure {
private:
    double side1;
    double side2;
    double side3;
    double side4;
    double height;
public:
    Trapeze(){
        setName("Trapeze");
        setSides();
    }
    Trapeze(double side1, double side2, double side3, double side4, double height){
        if(side1 <= 0 || side2 <= 0 || height <= 0 || side3 <= 0 || side4 <= 0) throw -1;
        else {
            setName("Trapeze");
            this->side1 = side1;
            this->side2 = side2;
            this->side3 = side3;
            this->side4 = side4;
            this->height = height;
        }
    }
    double getPerimeter() override {
        return side1 + side2 + side3 + side4;
    }
    double getArea() override {
        return 0.5 * height * (side1 + side2);
    }
private:
    void setSides(){
        double temp;
        cout << "Enter side 1: "; cin >> temp;
        temp <= 0 ? throw -1 : side1 = temp;
        cout << "Enter side 2: "; cin >> temp;
        temp <= 0 ? throw -1 : side2 = temp;
        cout << "Enter side 3: "; cin >> temp;
        temp <= 0 ? throw -1 : side3 = temp;
        cout << "Enter side 4: "; cin >> temp;
        temp <= 0 ? throw -1 : side4 = temp;
        cout << "Enter height: "; cin >> temp;
        temp <= 0 ? throw -1 : height = temp;
    }
};


