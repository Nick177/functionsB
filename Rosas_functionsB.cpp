// Name: Nicholas Rosas
// Date: 10-13-15
// Project Description: Functions Practice (Pass by Reference)

#include <iostream> // input and output
#include <cassert> // to use assert() for testing
#include <cmath> // to use fabs( )

using namespace std;

//Function Prototypes
// convert feet to inches
double feetToInches(double val);
void feetToInches(double valA, double& valB);
// calculate area
double computeRectangle(double valA, double valB);
void computeArea(double valA, double valB, double& valC);
// calculate area and perimeter
void computeArea(double valA, double valB, double& valArea, double& valPerimeter);
// returns the average and sum of the four parameters passed to it
void stats(double valA, double valB, double valC, double valD, double& valE, double& valF);
// Calculates the area and perimeter of a circle
void calcAreaPerimeter(double radius, double& area, double& perimeter);
// calculates area of a rectangle
double calcArea(double length, double width);


int main()
{
    const double E = 0.0001;
    double feet = 4, inches;
    double length = 2.2, width = 4.5, area, perimeter, r = 7.4;
    double val1 = 5.5, val2 = 2.5, val3 = 6.0, val4 = 7.5, sum, avg;
    
    
    assert( fabs( feetToInches(feet) - 48.0) < E);
    feetToInches(feet, inches);
    assert( fabs(inches - 48.0 ) < E);
    
    assert( fabs( computeRectangle(length, width) - 9.9 ) < E);
    computeArea(length, width, area);
    assert( fabs(area - 9.9) < E);
    
    computeArea(length, width, area, perimeter);
    assert( fabs(area - 9.9) < E);
    assert( fabs(perimeter - 13.4) < E);
    
    stats(val1, val2, val3, val4, sum, avg);
    assert( fabs(sum - 21.5) < E);
    assert( fabs(avg - 5.375) < E);
    
    calcAreaPerimeter(r, area, perimeter);
    assert( fabs(area - 172.0334) < E);
    assert( fabs(perimeter - 46.4955) < E);
    
    assert( fabs( calcArea(length, width) - 9.9) < E);

    cout << "Ran to here\n";

    return 0;
}

// Function Implementations below
double feetToInches(double val)
{
    return(val * 12);
}

void feetToInches(double valA, double& valB)
{
    valB = valA * 12;
}

double computeRectangle(double valA, double valB)
{
    return(valA * valB);
}

void computeArea(double valA, double valB, double& valC)
{
    valC = valA * valB;
}

void computeArea(double valA, double valB, double& valArea, double& valPerimeter)
{
    valArea = valA * valB;
    valPerimeter = 2 * (valA + valB);
}

void stats(double valA, double valB, double valC, double valD, double& valE, double& valF)
{
    valE = valA + valB + valC + valD;
    valF = valE / 4.0;
}

void calcAreaPerimeter(double radius, double& area, double& perimeter)
{
    const double PI = 3.14159;
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
}

double calcArea(double length, double width)
{
    return(length * width);
}

