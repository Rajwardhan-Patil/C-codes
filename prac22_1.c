#include <stdio.h>
#include <math.h>
#define PI 3.142

// Define a structure for a circle
struct Circle {
  double radius;
};

// Function to calculate the diameter of a circle
double diameter(struct Circle c) {
  return 2 * c.radius;
}

// Function to calculate the circumference of a circle
double circumference(struct Circle c) {
  return PI * diameter(c);
}

// Function to calculate the area of a circle
double area(struct Circle c) {
  return PI * pow(c.radius, 2);
}

int main() {
  struct Circle c;
  printf("Enter the radius of the circle: ");
  scanf("%lf", &c.radius);
  printf("Diameter of the circle is %.2lf\n", diameter(c));
  printf("Circumference of the circle is %.2lf\n", circumference(c));
  printf("Area of the circle is %.2lf\n", area(c));
  return 0;
}