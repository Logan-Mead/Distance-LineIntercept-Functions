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



int main(){
	printf("Starting Tests....\n");
	printf("--------------------------------------------------\n");
        double x1,y1,x2,y2;                                                       //create a double for x1,y1,x2,y2
        Point point1;                                                             //create a struct using Point named point1 and point2
        Point point2;
        
        printf("Enter x1: ");                                                     //ask the user to enter x1 and save it
        scanf("%lf", &x1);
        printf("Enter y1: ");                                                     //ask the user to enter y1 and save it
        scanf("%lf", &y1);
        point1 = createPoint(x1,y1);                                              //sets point1 to the function createPoint with x1 and y1
        printf("First Point: ");                                                    
        displayPoint(point1);                                                     //runs the displayPoint function with point1
        
        printf("Enter x2: ");                                                     //asks the user to enter x2 and save it
        scanf("%lf", &x2);
        printf("Enter y2: ");                                                     //asks the user to enter y2 and saves it
        scanf("%lf", &y2);
        point2 = createPoint(x2,y2);                                              //sets point2 equal to createPoint with x2 and y2
        printf("Second Point: ");
        displayPoint(point2);                                                     //runs the displayPoint with point2
        
        printf("Distance Between two points: %.2lf\n", distance(point1, point2)); //prints the distance between the two points and runs the function distance with point1 and point2
        
        double m,b;                                                               //creates a double named m and b
        printf("Enter a Slope: ");                                                //asks user to enter a slope and saves it as m
        scanf("%lf", &m);
        printf("Enter a Intercept: ");                                            //asks user to enter a intercept and saves it as b
        scanf("%lf", &b);
        printf("First Line: ");
        Line firstLine;                                                           //creates a struct using Line named firstLine
        firstLine = createLine(m,b);                                              //sets firstLine equal to,and runs, createLine with m and b
        displayLine(firstLine);                                                   //runs the function displayLine with firstLine
        
        double m2,b2;                                                             //creates a double names m2 and b2
        printf("Enter a Slope: ");                                                //asks user to enter a slope and saves it as m2
        scanf("%lf", &m2);
        printf("Enter a Intercept: ");                                            //asks user to enter a intercept and saves it as b2
        scanf("%lf", &b2);
        printf("Second Line: ");
        Line secondLine;                                                          //creates a struct using Line named secondLine
        secondLine = createLine(m2,b2);                                           //makes secondLine to run the function createLine with m2 and b2
        displayLine(secondLine);                                                  //runs the function displayLine with secondLine
        getIntercept(firstLine,secondLine);                                       //runs the function getIntercept with firstLine and secondLine
	
	printf("--------------------------------------------------\n");	
	printf("Testing Completed....\n");
	
	return EXIT_SUCCESS;
}
