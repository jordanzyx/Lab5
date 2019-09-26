//
// Created by Jordan on 9/26/2019.
//
#include <stdio.h>
#include "header.h"
double read_salary(FILE *infile){
    double val = 0;
    fscanf(infile,"%lf",&val);
    return val;
}
void display_salary_bracket(double salary){

    if(salary < 15000){
        printf("l");
        return;
    }
    if(salary > 15000 && salary < 200000)printf("m");
    else printf("h");

}