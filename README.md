# Three Points Lab Assignment

## Goal
This C++ program that will read three points and will determine if the points represent a line or a triangle, the program will output information about the line or triangle depending the case.  This project will help you practicing:
* C++ editing, running and debugging
* ID, variables, types
* Functions
* Control structures

## Sample Run

```
Input Point 1: 2 1
Input Point 1: 3 4
Input Point 1: 5 1
A Triangle
Sides:
  3.16
  3.61
  3.00
Angles:
  0.98
  1.25
  0.91
Perimeter:   9.77
Area:        4.50

```

## Detailed Explanation
When you run the program, it will ask the user to input three points. The program then will check whether the points form a line or a triangle.
* If the points make up a line the program will output:
  * The slope of the line
  * The length of the segment formed by the three points
* If the points make up a triangle the program will output:
  * The length of the sides
  * The interior angles
  * The triangle perimeter
  * The triangle area
* The points may form a vertical line, in which case you must only output: Infinite Slope and exit the program.

Your program should output the exact same format as it is shown in the sample runs section of this document. The assessment of this activity will be done automatically, and the script will check if your output matches exactly the output of the given cases.


## Functions to Write

Function Declaration | Description
---------------------|-------------
`double Slope(double, double, double, double)` | Calculates the slope of the line defined by the two points that the function takes as parameter.
`double Length(double, double, double, double)` | Calculates the length of the segment defined by the two points taken as parameter.
`double Area(double, double, double)` | Calculates the area of a triangle defined by the lengths of its sides.
`double Perimeter(double, double, double)` | Returns the perimeter of a triangle defined by the lengths of its sides.
`double Angle(double, double, double)` | Calculates the interior angle opposite to the length of the first parameter. The three parameters represent the length of the sides.


Here’s how it should look when you run with points (1, 2), (2, 4) and (5, 2):
```
Input Point 1: 1 2
Input Point 1: 2 4
Input Point 1: 5 2
A Triangle
Sides:
  2.24
  3.61
  4.00
Angles:
  0.59
  1.11
  1.45
Perimeter:   9.84
Area:        4.00





