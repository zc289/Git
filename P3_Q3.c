// This code computes the area of either
// a circle, ellipse, triangle or hexagon, given
// measurements by the user.
#include <stdio.h>		// Input-output library.
#include <math.h>		// Math library.

#define PI 3.1415926535		// Let's define Pi.

// Function prototype declarations.
void circleArea(void);
void ellipseArea(void);
void triangleArea(void);
void hexagonArea(void);

int main(void)
{
	// Declare the character determining the users shape choice.
	char choice;
	
	// What is the users shape choice?
	printf("Do you want to calculate the area of a [c]ircle, [e]llipse, [t]riangle, or [h]exagon? ");
	scanf("%c",&choice);
	
	// Input depends on choice.
	switch(choice)
	{
		case 'c': circleArea(); break;
		case 'e': ellipseArea(); break;
		case 't': triangleArea(); break;
		case 'h': hexagonArea(); break;
	}	
	
	return 0;
}

// Compute the area of a circle. 
// Requires no arguments (void) and returns nothing (void).
void circleArea(void)
{
	// Declare the radius and the area.
	float r, area;
	
	// Request appropriate user input (only need radius).
	printf("Input the radius of the circle: ");
	scanf("\n%f",&r);
	
	// Compute the area.
	area = PI*r*r;
	
	// Output the area
	printf("The area of the circle is %.2f", area);
}

// Compute the area of an ellipse. 
// Requires no arguments (void) and returns nothing (void).
void ellipseArea(void)
{
	// Decalre semi-major and semi-minor axis, and area.
	float a, b, area;
	
	// Input requires length of semi-major and semi-minor axis.
	printf("Input the length of the semi-major and semi-minor axis (a,b): ");
	scanf("\n%f,%f",&a,&b);
	
	// Compute the area.
	area = PI*a*b;
	
	// Output the area.
	printf("The area of the ellipse is %.2f", area);
}

// Compute the area of a triangle. 
// Requires no arguments (void) and returns nothing (void).
void triangleArea(void)
{
	// Declare the base length and perpendicular height of the triangle
	float b, h, area;
	
	// Input height and base length.
	printf("Input the base length of the triangle and the height of the triangle (b,h): ");
	scanf("\n%f,%f",&b,&h);
	
	// Compute area.
	area = h*b/2.0f;
	
	// Output the area.
	printf("The area of the triangle is %.2f", area);
}

// Compute the area of a hexagon. 
// Requires no arguments (void) and returns nothing (void).
void hexagonArea(void)
{
	// Declare side length of hexagon and area.
	float a, area;
	
	// Input side length.
	printf("Input the length of the side of the hexagon in cm: ");
	scanf("\n%f",&a);
	
	// Compute area.
	area = 3*sqrt(3)*a*a/2.0f;
	
	// Output the area.
	printf("The area of the hexagon is %.2f cm^2", area);
}