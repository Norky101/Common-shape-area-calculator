
/*
Name: Noah Pilkington (A)
COP1334 - Spring 2019 - TR 8:50AM
Due Date: Feb 08 2022
Geometry Calculator p241

 This program is designed to give the user a menu which will display certain options
 if they select a certain option it will run the If/Else If statements associated with it
 and solve the users problem of trying to find the area of a common shape.
*/

// opening the needed libaries
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
// declaring our variables which will hold inputs later on
int choice ;
float pi = 3.14159,
radius,
length,
width,
height,
area;

//declaring our constants for the menu option selection
const int circle = 1,
          rectangle = 2,
          triangle = 3,
          quit =4 ;

// menu will display with the users options
cout << " Finding the area of a common shape calculations\n\n" ;
cout << "1. Calculate the area of circle\n" ;
cout << "2. Calculate the area of rectangle\n" ;
cout << "3. Calculate the area of triangle\n" ;
cout << "4. Quit this program\n\n" ;
cout << "What would you like to do?\nPlease choose the options between 1-4 :" ;
cin >> choice ;

// if / else if statements begins. Each option will only run if equal to a certain user input, else if
// it will defer to the next option.

    if (choice == 1 )
    {
        cout << "What is the radius of the circle?\n" ;
        cin >> radius ;
        area = (pi*radius * 2) ;
                cout << "The area of your triangle is: "<< area<< endl;
    }
else if (choice == 2)
    {
        cout << "What is the length of the rectangle?\n" ;
        cin >> length ;
        cout << "What is the width of the rectangle?\n" ;
        cin >> width ;
        area = (length * width) ;
        cout << "The area of your rectangle is: "<< area<< endl;
    }

    else if  (choice == 3)
    {
        cout << "What is the length of the base of the triangle?\n" ;
        cin >> length;
        cout << "What is the height of the triangle?\n" ;
        cin >> height;
        area = (length*height*0.5) ;
        cout << "The area of your triangle is: "<< area << endl;
    }
    // If none of the above have been intialized, then the statement below will run.
    else
    {
        cout << "The program will now end\n\n"
                "Next time, try enter a valid input by reading the initial instructions!\n\n"
                "To repeat this program click 'run' in your IDE" ;
    }

    return 0;
}