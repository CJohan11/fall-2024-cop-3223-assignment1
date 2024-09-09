//Code that practices fracturing and follows the directions given.
#include <stdio.h>
#include <math.h>

#define PI 3.14159

//Calculates distance between 2 points

double calculateDistance() {
    double x1, y1, x2, y2;
    printf("Enter x coordinate 1: ");
    scanf("%1lf", &x1);
    printf("Enter y coordinate 1: ");
    scanf("%1lf", &y1);
    printf("Enter x coordinate 2: ");
    scanf("%1lf", &x2);
    printf("Enter y coordinate 2: ");
    scanf("%1lf", &y2);

    printf("Point 1 entered: x1 = %.21f; y1 = %.21f\n", x1, y1);
    printf("Point 2 entered: x2 = %.21f; y2 = %.21f\n", x2, y2);

    double distance = sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2));

    printf("The distance between the points given is %.21f\n", distance);

    return distance;
}

//Calculates the perimeter

double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * (distance + distance);

    printf("The perimeter of the given points is %.21f\n", perimeter);

    return 3.0;
}

//Calculates the area

double calculateArea() {
    double distance = calculateDistance();
    double area = distance * distance;

    printf("The area of the given points is %.21f\n", area);

    return 2.5;
}

//Calculates the width

double calculateWidth() {
    double distance = calculateDistance();
    double width = distance;

    printf("The width of the given points is %.21f\n", width);

    return 2.0;
}

//Calculates the height

double calculateHeight() {
    double distance = calculateDistance();
    double height = distance;

    printf("The height of the given points is %.21f\n", height);

    return 1.5;
}

//Main part of code that calls fucntions

int main(int argc, char **argv) {

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;

}