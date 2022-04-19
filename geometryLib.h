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
#ifndef GEOMETRYLIB_H
#define GEOMETRYLIB_H


//Define Structures shared across multiple files
typedef struct pt_struct{                                                         //the struct contains a double x and y and named the struct Point
	double x;
	double y;
} Point;

typedef struct line_struct{                                                       //the struct contains a double m and b and named the struct Line
	double m;
	double b;
} Line; 

//Define Function Prototypes (interfaces) used by multiple files
Point createPoint(double x, double y);                                            //create function header createPoint with a double x and y
void displayPoint(Point point);                                                   //create a function header displayPoint with the struct Point named point
double distance(Point point1,Point point2);                                       //create function header distance with struct Point named point1 and point2
Line createLine(double m,double b);                                               //create function header createLine with double m and b
void displayLine(Line ln);                                                        //create function header displayLine with struct Line named ln
Line createLineFromPts(Point point1,Point point2);                                //create function header createLineFromPts with struct Point named point1 and point2
Line getIntercept(Line firstLine,Line secondLine);                                //create function header getIntercept with struct Line named firstLine and secondLine

#endif