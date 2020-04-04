//
// Created by villi on 04.04.2020.
//

#pragma once

#include <string>
#include <iostream>
#include "Figure.h"

using namespace std;

class Rhombus : public Figure {
private:
    double side;
    double height;
public:
    Rhombus(){
        setName("Rhombus");
        setSides();
    }
    Rhombus(double side, double height){
        if(side <= 0 || height <= 0) throw -1;
        else {
            setName("Rhombus");
            this->side = side;
            this->height = height;
        }
    }
    double getPerimeter() override {
        return side * 4;
    }
    double getArea() override {
        return side * height;
    }
private:
    void setSides(){
        double temp;
        cout << "Enter side: "; cin >> temp;
        temp <= 0 ? throw -1 : side = temp;
        cout << "Enter height: "; cin >> temp;
        temp <= 0 ? throw -1 : height = temp;
    }
};


