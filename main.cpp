#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Rhombus.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Trapeze.h"
#include "Circle.h"
#include "Ellipse.h"

using namespace std;

int main() {
    try {
        Ellipse ellipse;
        cout << ellipse.getPerimeter();
    } catch (int e){
        if(e == -1)
            cout << "\nYou have entered a side <= 0.";
    }
}