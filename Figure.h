//
// Created by villi on 04.04.2020.
//

#pragma once

#include <string>
using namespace std;

class Figure {
private:
    string name;
public:
    Figure(){}
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;
    string getName(){
        return name;
    }
protected:
    void setName(string name){
        this->name = name;
    }
};


