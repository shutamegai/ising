//
//  main.c
//  ising
//
//  Created by Shu Tamegai on 2017/03/05.
//  Copyright © 2017年 ShuTamegai. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <GLUT/glut.h>

#define width 700
#define height 700
#define y_base -0.8
#define radius 0.05
#define _radius 0.045
#define max 20

void hexagon(double, double, double);
int _fabs(double, double, double, double);
void angle_b(int, double, double, double*, double*, int*, double*, double*);
void angle_w(int, double, double, double*, double*, int*, double*, double*);
void display();
void init();


//------------------------------------------------------------------------------
void hexagon(double x, double y, double r) {
    glBegin(GL_POLYGON);
    glVertex2f(x, y+r);
    glVertex2f(x-r*cos(M_PI/6), y+r*sin(M_PI/6));
    glVertex2f(x-r*cos(M_PI/6), y-r*sin(M_PI/6));
    glVertex2f(x, y-r);
    glVertex2f(x+r*cos(M_PI/6), y-r*sin(M_PI/6));
    glVertex2f(x+r*cos(M_PI/6), y+r*sin(M_PI/6));
    glEnd();
    
}


//------------------------------------------------------------------------------
int _fabs(double x, double y, double x_pos, double y_pos) {
    int out;
    double x_fabs;
    double y_fabs;
    
    x_fabs = fabs(x-x_pos);
    y_fabs = fabs(y-y_pos);
    
    if (x_fabs<0.01 && y_fabs<0.01) {
        out = 1;
        //printf("%f, %f\n", x_fabs, y_fabs);
    }
    else
        out = 0;
    
    return out;
    
}


//------------------------------------------------------------------------------
void angle_b(int ang, double x, double y, double x_pos[], double y_pos[], int *ang_ang, double *xxx, double *yyy) {
    int out = 0;
    double x_1 = 2*radius*cos(M_PI/6);
    double y_1 = 0;
    double x_2 = radius*cos(M_PI/6);
    double y_2 = radius+radius*sin(M_PI/6);
    double x_3 = -radius*cos(M_PI/6);
    double y_3 = radius+radius*sin(M_PI/6);
    double x_4 = -2*radius*cos(M_PI/6);
    double y_4 = 0;
    double x_5 = -radius*cos(M_PI/6);
    double y_5 = -(radius+radius*sin(M_PI/6));
    double x_6 = radius*cos(M_PI/6);
    double y_6 = -(radius+radius*sin(M_PI/6));
    
        switch (ang) {
            case 1:
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_5, y+y_5, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_5, y+y_5, _radius);
                    *ang_ang = 5;
                    *xxx = x+x_5;
                    *yyy = y+y_5;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_6, y+y_6, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_6, y+y_6, _radius);
                    *ang_ang = 6;
                    *xxx = x+x_6;
                    *yyy = y+y_6;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_1, y+y_1, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_1, y+y_1, _radius);
                    *ang_ang = 1;
                    *xxx = x+x_1;
                    *yyy = y+y_1;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_2, y+y_2, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_2, y+y_2, _radius);
                    *ang_ang = 2;
                    *xxx = x+x_2;
                    *yyy = y+y_2;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_3, y+y_3, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_3, y+y_3, _radius);
                    *ang_ang = 3;
                    *xxx = x+x_3;
                    *yyy = y+y_3;
                    break;
                }
            
                
            case 2:
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_6, y+y_6, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_6, y+y_6, _radius);
                    *ang_ang = 6;
                    *xxx = x+x_6;
                    *yyy = y+y_6;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_1, y+y_1, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_1, y+y_1, _radius);
                    *ang_ang = 1;
                    *xxx = x+x_1;
                    *yyy = y+y_1;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_2, y+y_2, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_2, y+y_2, _radius);
                    *ang_ang = 2;
                    *xxx = x+x_2;
                    *yyy = y+y_2;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_3, y+y_3, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_3, y+y_3, _radius);
                    *ang_ang = 3;
                    *xxx = x+x_3;
                    *yyy = y+y_3;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_4, y+y_4, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_4, y+y_4, _radius);
                    *ang_ang = 4;
                    *xxx = x+x_4;
                    *yyy = y+y_4;
                    break;
                }
            
                
            case 3:
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_1, y+y_1, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_1, y+y_1, _radius);
                    *ang_ang = 1;
                    *xxx = x+x_1;
                    *yyy = y+y_1;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_2, y+y_2, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_2, y+y_2, _radius);
                    *ang_ang = 2;
                    *xxx = x+x_2;
                    *yyy = y+y_2;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_3, y+y_3, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_3, y+y_3, _radius);
                    *ang_ang = 3;
                    *xxx = x+x_3;
                    *yyy = y+y_3;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_4, y+y_4, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_4, y+y_4, _radius);
                    *ang_ang = 4;
                    *xxx = x+x_4;
                    *yyy = y+y_4;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_5, y+y_5, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_5, y+y_5, _radius);
                    *ang_ang = 5;
                    *xxx = x+x_5;
                    *yyy = y+y_5;
                    break;
                }
                
                
            case 4:
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_2, y+y_2, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_2, y+y_2, _radius);
                    *ang_ang = 2;
                    *xxx = x+x_2;
                    *yyy = y+y_2;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_3, y+y_3, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_3, y+y_3, _radius);
                    *ang_ang = 3;
                    *xxx = x+x_3;
                    *yyy = y+y_3;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_4, y+y_4, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_4, y+y_4, _radius);
                    *ang_ang = 4;
                    *xxx = x+x_4;
                    *yyy = y+y_4;
                    break;
                }
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_5, y+y_5, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_5, y+y_5, _radius);
                    *ang_ang = 5;
                    *xxx = x+x_5;
                    *yyy = y+y_5;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_6, y+y_6, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_6, y+y_6, _radius);
                    *ang_ang = 6;
                    *xxx = x+x_6;
                    *yyy = y+y_6;
                    break;
                }
                
                
            case 5:
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_3, y+y_3, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_3, y+y_3, _radius);
                    *ang_ang = 3;
                    *xxx = x+x_3;
                    *yyy = y+y_3;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_4, y+y_4, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_4, y+y_4, _radius);
                    *ang_ang = 4;
                    *xxx = x+x_4;
                    *yyy = y+y_4;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_5, y+y_5, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_5, y+y_5, _radius);
                    *ang_ang = 5;
                    *xxx = x+x_5;
                    *yyy = y+y_5;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_6, y+y_6, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_6, y+y_6, _radius);
                    *ang_ang = 6;
                    *xxx = x+x_6;
                    *yyy = y+y_6;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_1, y+y_1, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_1, y+y_1, _radius);
                    *ang_ang = 1;
                    *xxx = x+x_1;
                    *yyy = y+y_1;
                    break;
                }
                
                
            case 6:
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_4, y+y_4, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_4, y+y_4, _radius);
                    *ang_ang = 4;
                    *xxx = x+x_4;
                    *yyy = y+y_4;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_5, y+y_5, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_5, y+y_5, _radius);
                    *ang_ang = 5;
                    *xxx = x+x_5;
                    *yyy = y+y_5;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_6, y+y_6, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_6, y+y_6, _radius);
                    *ang_ang = 6;
                    *xxx = x+x_6;
                    *yyy = y+y_6;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_1, y+y_1, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_1, y+y_1, _radius);
                    *ang_ang = 1;
                    *xxx = x+x_1;
                    *yyy = y+y_1;
                    break;
                }
                
                out = 0;
                for (int i=0; y_pos[i]!=0; i++) {
                    if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                        out = 1;
                }
                if (out==0) {
                    glColor3f(0, 0, 0);
                    hexagon(x+x_2, y+y_2, radius);
                    glColor3f(0.4, 0.4, 0.4);
                    hexagon(x+x_2, y+y_2, _radius);
                    *ang_ang = 2;
                    *xxx = x+x_2;
                    *yyy = y+y_2;
                    break;
                }
        }
    
}


//------------------------------------------------------------------------------
void angle_w(int ang, double x, double y, double x_pos[], double y_pos[], int *ang_ang, double *xxx, double *yyy) {
    int out = 0;
    double x_1 = 2*radius*cos(M_PI/6);
    double y_1 = 0;
    double x_2 = radius*cos(M_PI/6);
    double y_2 = radius+radius*sin(M_PI/6);
    double x_3 = -radius*cos(M_PI/6);
    double y_3 = radius+radius*sin(M_PI/6);
    double x_4 = -2*radius*cos(M_PI/6);
    double y_4 = 0;
    double x_5 = -radius*cos(M_PI/6);
    double y_5 = -(radius+radius*sin(M_PI/6));
    double x_6 = radius*cos(M_PI/6);
    double y_6 = -(radius+radius*sin(M_PI/6));
    
    switch (ang) {
        case 1:
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_3, y+y_3, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_3, y+y_3, _radius);
                *ang_ang = 3;
                *xxx = x+x_3;
                *yyy = y+y_3;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_2, y+y_2, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_2, y+y_2, _radius);
                *ang_ang = 2;
                *xxx = x+x_2;
                *yyy = y+y_2;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_1, y+y_1, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_1, y+y_1, _radius);
                *ang_ang = 1;
                *xxx = x+x_1;
                *yyy = y+y_1;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_6, y+y_6, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_6, y+y_6, _radius);
                *ang_ang = 6;
                *xxx = x+x_6;
                *yyy = y+y_6;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_5, y+y_5, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_5, y+y_5, _radius);
                *ang_ang = 5;
                *xxx = x+x_5;
                *yyy = y+y_5;
                break;
            }
            
            
        case 2:
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_4, y+y_4, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_4, y+y_4, _radius);
                *ang_ang = 4;
                *xxx = x+x_4;
                *yyy = y+y_4;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_3, y+y_3, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_3, y+y_3, _radius);
                *ang_ang = 3;
                *xxx = x+x_3;
                *yyy = y+y_3;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_2, y+y_2, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_2, y+y_2, _radius);
                *ang_ang = 2;
                *xxx = x+x_2;
                *yyy = y+y_2;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_1, y+y_1, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_1, y+y_1, _radius);
                *ang_ang = 1;
                *xxx = x+x_1;
                *yyy = y+y_1;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_6, y+y_6, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_6, y+y_6, _radius);
                *ang_ang = 6;
                *xxx = x+x_6;
                *yyy = y+y_6;
                break;
            }
            
            
        case 3:
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_5, y+y_5, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_5, y+y_5, _radius);
                *ang_ang = 5;
                *xxx = x+x_5;
                *yyy = y+y_5;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_4, y+y_4, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_4, y+y_4, _radius);
                *ang_ang = 4;
                *xxx = x+x_4;
                *yyy = y+y_4;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_3, y+y_3, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_3, y+y_3, _radius);
                *ang_ang = 3;
                *xxx = x+x_3;
                *yyy = y+y_3;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_2, y+y_2, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_2, y+y_2, _radius);
                *ang_ang = 2;
                *xxx = x+x_2;
                *yyy = y+y_2;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_1, y+y_1, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_1, y+y_1, _radius);
                *ang_ang = 1;
                *xxx = x+x_1;
                *yyy = y+y_1;
                break;
            }
            
            
        case 4:
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_6, y+y_6, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_6, y+y_6, _radius);
                *ang_ang = 6;
                *xxx = x+x_6;
                *yyy = y+y_6;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_5, y+y_5, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_5, y+y_5, _radius);
                *ang_ang = 5;
                *xxx = x+x_5;
                *yyy = y+y_5;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_4, y+y_4, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_4, y+y_4, _radius);
                *ang_ang = 4;
                *xxx = x+x_4;
                *yyy = y+y_4;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_3, y+y_3, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_3, y+y_3, _radius);
                *ang_ang = 3;
                *xxx = x+x_3;
                *yyy = y+y_3;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_2, y+y_2, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_2, y+y_2, _radius);
                *ang_ang = 2;
                *xxx = x+x_2;
                *yyy = y+y_2;
                break;
            }
            
            
        case 5:
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_1, y+y_1, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_1, y+y_1, _radius);
                *ang_ang = 1;
                *xxx = x+x_1;
                *yyy = y+y_1;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_6, y+y_6, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_6, y+y_6, _radius);
                *ang_ang = 6;
                *xxx = x+x_6;
                *yyy = y+y_6;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_5, y+y_5, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_5, y+y_5, _radius);
                *ang_ang = 5;
                *xxx = x+x_5;
                *yyy = y+y_5;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_4, y+y_4, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_4, y+y_4, _radius);
                *ang_ang = 4;
                *xxx = x+x_4;
                *yyy = y+y_4;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_3, y+y_3, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_3, y+y_3, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_3, y+y_3, _radius);
                *ang_ang = 3;
                *xxx = x+x_3;
                *yyy = y+y_3;
                break;
            }
            
            
        case 6:
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_2, y+y_2, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_2, y+y_2, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_2, y+y_2, _radius);
                *ang_ang = 2;
                *xxx = x+x_2;
                *yyy = y+y_2;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_1, y+y_1, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_1, y+y_1, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_1, y+y_1, _radius);
                *ang_ang = 1;
                *xxx = x+x_1;
                *yyy = y+y_1;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_6, y+y_6, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_6, y+y_6, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_6, y+y_6, _radius);
                *ang_ang = 6;
                *xxx = x+x_6;
                *yyy = y+y_6;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_5, y+y_5, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_5, y+y_5, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_5, y+y_5, _radius);
                *ang_ang = 5;
                *xxx = x+x_5;
                *yyy = y+y_5;
                break;
            }
            
            out = 0;
            for (int i=0; y_pos[i]!=0; i++) {
                if (_fabs(x+x_4, y+y_4, x_pos[i], y_pos[i])==1)
                    out = 1;
            }
            if (out==0) {
                glColor3f(0, 0, 0);
                hexagon(x+x_4, y+y_4, radius);
                glColor3f(0.9, 0.9, 0.9);
                hexagon(x+x_4, y+y_4, _radius);
                *ang_ang = 4;
                *xxx = x+x_4;
                *yyy = y+y_4;
                break;
            }
    }
    
}


//------------------------------------------------------------------------------
void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    
    int ang;
    int num=0;
    int ang_ang_b;
    double xxx_b;
    double yyy_b;
    int ang_ang_w;
    double xxx_w;
    double yyy_w;
    double rand[100];
    double x_pos[100];
    double y_pos[100];
    double x = -radius*cos(M_PI/6);
    double y = y_base;
    double x_move = 2*radius*cos(M_PI/6);
 
    
//random
    srand(123L);
    for (int i=0; i<max; i++)
        rand[i] = drand48();
    
//black
    for (int i=0; i<10; i++) {
        glColor3f(0, 0, 0);
        hexagon(x-(i*x_move), y, radius);
        glColor3f(0.4, 0.4, 0.4);
        hexagon(x-(i*x_move), y, _radius);
        x_pos[num] = x-(i*x_move);
        y_pos[num] = y;
        num++;
    }
    
//white
    for (int i=1; i<11; i++) {
        glColor3f(0, 0, 0);
        hexagon(x+(i*x_move), y, radius);
        glColor3f(0.9, 0.9, 0.9);
        hexagon(x+(i*x_move), y, _radius);
        x_pos[num] = x+(i*x_move);
        y_pos[num] = y;
        num++;
    }
/*
//sample
    x = 6*radius*cos(M_PI/6);
    y = y_base+radius+radius*sin(M_PI/6);
    glColor3f(0, 0, 0);
    hexagon(x, y, radius);
    glColor3f(0.9, 0.9, 0.9);
    hexagon(x, y, _radius);
    x_pos[num] = x;
    y_pos[num] = y;
    num++;
*/
    
//start
    x = 0;
    y = y_base+radius+radius*sin(M_PI/6);
    glColor3f(0, 0, 0);
    hexagon(x, y, radius);
    glColor3f(0.4, 0.4, 0.4);
    hexagon(x, y, _radius);
    x_pos[num] = x;
    y_pos[num] = y;
    num++;
    ang = 2;

//main
    if (rand[0]>=0.5) {
        angle_b(ang, x, y, x_pos, y_pos, &ang_ang_b, &xxx_b, &yyy_b);
        ang = ang_ang_b;
        x = xxx_b;
        y = yyy_b;
        x_pos[num] = xxx_b;
        y_pos[num] = yyy_b;
        num++;
    }else{
        angle_w(ang, x, y, x_pos, y_pos, &ang_ang_w, &xxx_w, &yyy_w);
        ang = ang_ang_w;
         x = xxx_w;
         y = yyy_w;
        x_pos[num] = xxx_w;
        y_pos[num] = yyy_w;
        num++;
    }

    for (int i=1; i<max; i++) {
        if (rand[i]>=0.5) {
            angle_b(ang, x, y, x_pos, y_pos, &ang_ang_b, &xxx_b, &yyy_b);
            ang = ang_ang_b;
            x = xxx_b;
            y = yyy_b;
            x_pos[num] = xxx_b;
            y_pos[num] = yyy_b;
            num++;
            printf("%3d b\n", i);
        }else{
            angle_w(ang, x, y, x_pos, y_pos, &ang_ang_w, &xxx_w, &yyy_w);
            ang = ang_ang_w;
             x = xxx_w;
             y = yyy_w;
            x_pos[num] = xxx_w;
            y_pos[num] = yyy_w;
            num++;
            printf("%3d w\n", i);
        }
    }
    
    for (int i=0; y_pos[i]!=0; i++) {
        printf("%3d: %f, %f\n", i, x_pos[i], y_pos[i]);
    }
    

    glFlush();
    
}


//------------------------------------------------------------------------------
void init(void) {
    glClearColor(1.0, 1.0, 1.0, 1.0);

}


//------------------------------------------------------------------------------
int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitWindowPosition(200, 0);
    glutInitWindowSize(width, height);
    glutInitDisplayMode(GLUT_RGBA);
    
    glutCreateWindow("ISING MODEL");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    
    return 0;
    
}
