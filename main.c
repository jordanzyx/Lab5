#include <stdio.h>
#include "header.h"

int main() {
    FILE *infile = NULL;
    infile = fopen("C:\\Users\\Jordan\\CLionProjects\\Lab5\\salaries.txt","r");

    double salary = 0;

    salary += read_salary(infile);
    salary += read_salary(infile);
    salary += read_salary(infile);
    salary += read_salary(infile);

    fclose(infile);

    display_salary_bracket(salary);

    return 0;
}