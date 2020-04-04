//
// Created by villi on 04.04.2020.
//

#pragma once

#include <string>
#include <iostream>
#include "Figure.h"

using namespace std;

class Circle : public Figure {
private:
    const double PI = 3.14;
    double radius;
public:
    Circle(){
        setName("Circle");
        setSides();
    }
    Circle(double radius){
        if(radius <= 0) throw -1;
        else {
            setName("Circle");
            this->radius = radius;
        }
    }
    double getPerimeter() override {
        return 2 * PI * radius;
    }
    double getArea() override {
        return PI * radius * radius;
    }
private:
    void setSides(){
        double temp;
        cout << "Enter radius: "; cin >> temp;
        temp <= 0 ? throw -1 : radius = temp;
    }
};


