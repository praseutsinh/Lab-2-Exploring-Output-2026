/********************************
Nikolas Praseutsinh
Computer Science Fall 2026
Due: September 15, 2026
Lab 2: Exploring Output
Calculate the volume and surface area of the cylinder and output radius, height, volume and surface area of the cylinder.
*********************************/

#include <iostream>

//Function prototypes
float calculateVolume(float r, float h , float pi);
float calculateSurfaceArea(float r, float h, float pi);

int main() {
	//Define the radius and height of the cylinder
	float radius = 10;
	float height = 5;
	const float pi = 3.14159;

	//Output the results to the console
	std::cout << "Radius: " << radius << "\n";
	std::cout << "Height: " << height << "\n";
	std::cout << "Volume: " << calculateVolume(radius, height, pi) << "\n";
	std::cout << "Surface Area: " << calculateSurfaceArea(radius, height, pi) << "\n";

	return 0;
}
//Function to calculate volume of a cylinder using radius and height
float calculateVolume(float r, float h , float pi) {
	return pi * r * r * h;
}

// Function to calculate surface area of a cylinder using radius and height
float calculateSurfaceArea(float r, float h, float pi) {
	return 2 * pi * r * (r + h);
}
