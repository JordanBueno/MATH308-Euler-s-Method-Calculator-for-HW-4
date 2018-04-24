//  MATH308 Euler's Method Calculator for HW4
//
//  Created by Jordan Bueno on 4/23/18.
//  Copyright © 2018 Jordan Bueno. All rights reserved.
//
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //im designing this program to work with the expression y'(t)=5t-3*sqrt(y)
    //because aint nobody got time to design a program that parses a string into a mathematical expression
    //perhaps that could be a project for another day...
    
    float tInitial = 0, yInitial = 2, h = 0, dy = 0, y=0;
    
    cout << "Enter h, your interval of approximation: ";
    cin >> h;
    

    
    for(float i = h; i < 1.01; i+=h)
    {
        dy=(5*tInitial)-(3*sqrt(yInitial));

        y = yInitial+(dy*h);
        
        cout << "\n\nFor t = " << i << ", an approximation of y: " << y << endl;
        
        tInitial=i;
        yInitial=y;
    }

    return 0;
}
