//Machine Problem # 2

#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    int x1, y1, x2, y2, x3, y3, n, interiorAngle;
    float x, y, z, perimeter, area, base, height, adjacent, opposite;
    float tangent, apothem, circumcenter;
    n=3;
    
    
    cout << "Enter the coordinates of the triangle." << endl;
    cout << "Enter x1 coordinate: ";
    cin >> x1; // Enter the x coordinate of the first point.
    cout << "Enter y1 coordinate: ";
    cin >> y1; // Enter the y coordinate of the first point.
    
    cout << "Enter x2 coordinate: ";
    cin >> x2; // Enter the x coordinate of the second point.
    cout << "Enter y2 coordinate: ";
    cin >> y2; // Enter the y coordinate of the second point.
    
    cout << "Enter x3 coordinate: ";
    cin >> x3; // Enter the x coordinate of the third point.
    cout << "Enter y3 coordinate: ";
    cin >> y3; // Enter the y coordinate of the third point.
    
    interiorAngle = ((n-2)*180); //Interior angle's formula
    cout << "Interior Angle: " << interiorAngle <<endl;
    
    //Classification of the triangle:
    
    x = sqrt(pow((x1-x2),2.0)+pow((y1-y2),2.0)); //Formula of distance between points 1 & 2
    y = sqrt(pow((x2-x3),2.0)+pow((y2-y3),2.0)); //Formula of distance between points 2 & 3
    z = sqrt(pow((x3-x1),2.0)+pow((y3-y1),2.0)); //Formula of distance between point 3 & 1
    // x, y, z are the values that will be used to find perimeter and to classify the triangle.
    
    // All sides are equal
    if ((x==y)&&(y==z))
    {
        cout << "The Triangle is an Equilateral Triangle." << endl;
    }
    
    // 2 sides are equal
    else if ((x==y)||(y==z))
    {
        cout << "The Triangle is an Isosceles Triangle." << endl;
    }
    
    // No equal sides
    else
    {
        cout << "The Triangle is a Scalene Triangle." << endl;
    }
    
    //Determining the perimeter and area of the triangle:
    cout << "Enter base: ";
    cin >> base; // The user will input the value of the base of the triangle
    cout << "Enter height: ";
    cin >> height;  // The user will input the value of the height of the the triangle
    
    /* These values will be used to find the area of the triangle
     while the values of x, y, z will be used to find the value of the perimeter*/
    
    perimeter = x + y + z; // Formula for getting the triangle's perimeter
    area = base*height/2; // Formula for getting the triangle's area
    
    
    cout << "The Perimeter is " << perimeter << " units." <<endl;
    cout << "The Area is " << area << " squared units." <<endl;
    
    
    //Classifying the type of triangle based on the angle:
    if (pow(x,2) + pow(y,2) > pow(z,2)){ //This is the formula used to determine if it is an acute triangle
        cout << "It is an acute triangle." <<endl;
    }
    else if (pow(x,2) + pow(y,2) == pow(z,2)){ //This is the formula used to determine if it is a right triangle
        cout << "It is a right triangle." <<endl;
    }
    else{ //This is the formula used to determine if it is an obtuse triangle
        cout << "It is an obtuse triangle." <<endl;
    }
    
    cout << "Enter opposite side value: ";
    cin >> opposite; //The user will inpute the value of the opposite side of the triangle
    cout << "Enter adjacent side value: ";
    cin >> adjacent;// The user will input the value of the adjacent side of the triangle
    
    /* These values will be used to find the value of the tangent that will be later on
     be used to find the apothem*/
    
    
    tangent = opposite/adjacent; //The value of the tangent will be used to find the apothem
    tangent = pow(tangent,-1.0); //This is the formula to convert the tangent to degrees
    apothem = x/(2*tangent*(180/n)); //The formula to find the apothem
    circumcenter = (x*y*z)/sqrt((x+y+z)*(y+z-x)*(z+x-y)*(x+y-z)); //The formula to find the circumcenter
    
    cout << "Apothem: " << apothem <<endl;
    cout << "Circumcenter: "<< circumcenter <<endl;
    
    return 0;
}

