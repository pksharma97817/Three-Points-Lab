/*Title:  Lab – threepoints.cpp
Purpose:  read three points and determine if they form a line or triangle
Author:   Pardeep Sharma
*/
#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265
using std::cout;
using std::endl;
using std::cin;
using std::fixed;
using std::setprecision;
using std::isinf;


double Slope(double x1, double y1, double x2, double y2);
double Length(double x1, double y1, double x2, double y2);
double Area(double a, double b, double c);
double Perimeter(double a, double b, double c);
double Angle(double a, double b, double c);


int main() {
    double x1, x2, y1, y2, x3, y3;
    cout << "Input point 1: ";
    cin >>x1>>y1;
    cout << "Input point 2: ";
    cin >>x2>>y2;
    cout << "Input point 3: ";
    cin >>x3>>y3;
    double AB = Slope(x1,y1, x2, y2);
    double BC = Slope(x2,y2, x3, y3);
    double AC = Slope(x1,y1, x3, y3);
    double LengthAB = Length(x1,y1, x2, y2);
    double LengthBC = Length(x2,y2, x3, y3);
    double LengthCA = Length(x3,y3, x1, y1);


    if(isinf(AB) || isinf(BC) || isinf(AC)) {
        cout << "Infinite Slope";
    }
    else if(AB == BC && BC == AC){
        cout <<"A Line"<<endl;
        cout<<"Slope:\t"<<fixed<<setprecision(2)<<AB<<endl;
        cout<<"Length:\t"<<fixed<<setprecision(2)<<LengthAB + LengthBC<<endl;
    }
    else if (AB != BC && BC != AC ){
        cout<<"A Triangle"<<endl;
        cout<<"Sides:"<<endl
            <<"\t"<<fixed<<setprecision(2)<<LengthAB<<endl
            <<"\t"<<fixed<<setprecision(2)<<LengthBC<<endl
            <<"\t"<<fixed<<setprecision(2)<<LengthCA<<endl;
        cout<<"Angles:"<<endl;
        cout<<Angle(LengthAB,LengthBC,LengthCA)<<endl;
        cout<<"Perimeter:\t"<<setprecision(2)<<Perimeter(LengthAB,LengthBC,LengthCA)<<endl;
        cout<<"Area:\t\t"<<setprecision(2)<<Area(LengthAB,LengthBC,LengthCA)<<endl;
    }


    return 0;
}

double Slope(double x1, double y1, double x2, double y2){
    double slope = ((y2 - y1)/(x2 - x1));
    return slope;

}
double Length(double x1, double y1, double x2, double y2){
    double length = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return length;

}
double Area(double a, double b, double c){
    double s = (a + b + c)/2.0;    // s is the half of the perimeter of triangle.
    double area = sqrt(s*(s - a) * (s - b) * (s - c));
    return area;

}
double Perimeter(double a, double b, double c){
    double perimeter = a + b + c;
    return perimeter;

}
double Angle(double a, double b, double c){
    double angleA = acos((pow(b,2)+pow(c,2)-pow(c,2))/(2*b*c));
    double angleB = acos((pow(a,2)+pow(b,2)-pow(b,2))/(2*a*c));
    double angleC = acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b));
    cout<<setprecision(2)<<angleA<<'\t'<<fixed<<setprecision(2)<<angleA*(180.0/PI)<<" Deg"<<endl
        <<setprecision(2)<<angleB<<'\t'<<fixed<<setprecision(2)<<angleB*(180.0/PI)<<" Deg"<<endl
        <<setprecision(2)<<angleC<<'\t'<<fixed<<setprecision(2)<<angleC*(180.0/PI)<<" Deg"<<endl;

}
