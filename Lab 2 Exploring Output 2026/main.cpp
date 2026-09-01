#include <iostream>
//Function to calculate Volume of a cylinder using radius and height
float calculateVolume(float r, float h) {
	return 3.14159 * r * r * h;

}
//Function to calculate surface area of a cylinder using radius and height

float calculateSurfaceArea(float r, float h) {
	return 2 * 3.14159 * r * (r + h);
}

int main() {
	//Define the radius and height of the cylinder
	float radius = 10;
	float height = 5;


	//Output the results to the console
	std::cout << "Radius: " << radius << "\n";
	std::cout << "Height: " << height << "\n";
	std::cout << "Volume: " << calculateVolume(radius, height) << "\n";
	std::cout << "Surface Area: " << calculateSurfaceArea(radius, height) << "\n";

	return 0;
	//Finished 9/1/2026 10:11 AM
}