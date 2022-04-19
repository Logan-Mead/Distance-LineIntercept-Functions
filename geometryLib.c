/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logan Mead
 * ECE 141-SPRING 2020
 * Created on March 10, 2020, 8:17 PM
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "geometryLib.h"


//Question #1
Point createPoint(double x,double y){                                             //function createPoint that brings in a double x and y
        Point pt;                                                                 //creates a variable using the struct Point named pt
        pt.x = x;                                                                 //set pt.x equal to x
        pt.y = y;                                                                 //sets pt.y equal to y
	return pt;                                                                //returns pt
}
void displayPoint(Point pt){                                                      //function displayPoint that brings in the struct Point named pt
    printf("(%.2lf,%.2lf)\n",pt.x,pt.y);                                          //prints the point with pt.x and pt.y
}
double distance(Point point1, Point point2){                                      //function distance with the struct Point named point1 and point2
    double xSum;                                                                  //creates doubles named xSum,ySum and totalSum
    double ySum;
    double totalSum;
    xSum = (point2.x - point1.x)*(point2.x - point1.x);                           //calculates xSum by multiplying the difference of point2.x and point1.x
    ySum = (point2.y - point1.y)*(point2.y - point1.y);                           //calculates ySum by multiplying the difference of point2.y and point1.y
    totalSum = xSum + ySum;                                                       //sets totalSum to the xSum plus the ySum
    totalSum = sqrt(totalSum);                                                    //finds the square root of totalSum
    return totalSum;                                                              //returns totalSum
}
Line createLine(double m,double b){                                               //function createLine that brings in double named m and b
    Line ln;                                                                      //creates a variable using the struct Line named ln
    ln.m = m;                                                                     //sets ln.m equal to m
    ln.b = b;                                                                     //sets ln.b equal to b
    return ln;                                                                    //returns ln
}
void displayLine(Line ln){                                                        //function displayLine that brings in the struct Line named ln
    printf("y = %.2lfx + %.2lf\n",ln.m,ln.b);                                     //prints the line using ln.m and ln.b
    
}
Line createLineFromPts(Point point1,Point point2){                                //function createLineFromPts that brings in the struct Point named point1 and point2
 double slopeY;                                                                   //creates doubles named slopeY, slopeX and slope
 double slopeX;
 double slope;
 slopeY = point2.y - point1.y;                                                    //sets slopeY equal to the difference of point2.y and point1.y
 slopeX = point2.x - point1.x;                                                    //sets slopeX equal to the difference of point2.x and point1.x
 slope = slopeY/slopeX;                                                           //sets slope equal to slopeY divide by slopeX
 
 double intercept;                                                                //creates a double named intercept
 intercept = (point1.y)/(slope*point1.x);                                         //finds intercept by dividing point1.y by slope times point1.x
 Line theLine = createLine(slope, intercept);                                     //creates a variable named theLine using the struct Line equal to createLine bringing in slope and intercept
 printf("Line From two Point: ");                                                 //prints line from two points:
 displayLine(theLine);                                                            //runs the function displayLine and brings in theLine
 return theLine;                                                                  //returns theLine
}

Line getIntercept(Line firstLine,Line secondLine){                                //function getIntercept that brings in the struct Line named firstLine and secondLine
    double x;                                                                     //creates doubles named x, finalB, finalM and yIntercpet
    double finalB;
    double finalM;
    double yIntercept;
    
    finalB = (firstLine.b - secondLine.b);                                        //sets finalB equal to the difference of firstLine.b and secondLine.b
    finalM = (secondLine.m - firstLine.m);                                        //sets finalM equal to the difference of firstLine.m and secondLine.m
    x = finalB/finalM;                                                            //sets x equal to finalB divided by finalM
    yIntercept = (firstLine.m * x) + firstLine.b;                                 //sets yIntercept equal to (firstLine.m times x) plus firstLine.b
    if(firstLine.m == secondLine.m){                                              //statement that runs if the firstLine slope is equal to the secondLine slope
        printf("Lines are Parallel\n");                                           //prints out that the two lines are parallel
    }
    else{                                                                         //runs only if the other statement is false and prints out where the two lines intercept
        printf("Intercept is: (%.2lf,%.2lf)\n", x, yIntercept); 
    }
}

