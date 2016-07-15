//colision.cpp

/*
Problem Description:
Collision detection is one of the most common operations (and important) in electronic games. 
The goal basically is to verify that any two objects collide, ie if the intersection between 
them is different from 0. 

This can be used to know if two ships collided, if a monster hit a wall, if a character picked up an item, etc.

To make things easier, often objects are approximated by simple geometric shapes 
(spheres, cobblestones, triangles etc). In this problem, the objects are approximated by rectangles in a 2D plane.

Write a program that, given two rectangles, determine if they intersect or not.
*/

#include <iostream>
#define MAX 1000000

using namespace std;

int main() {

	int square_a[4], square_b[4];

	for (int i = 0; i < 4; i++) {
		cin >> square_a[i];
	}

	for (int i = 0; i < 4; i++) {
        cin >> square_b[i];
    }

	if(
		square_a[0] >= 0 && square_a[0] < square_a[2] &&
		square_a[1] >= 0 && square_a[1] < square_a[3] &&
		square_b[0] >= 0 && square_b[0] < square_b[2] &&
        square_b[1] >= 0 && square_b[1] < square_b[3]
	) {
		if(square_a[2] < square_b[0] || square_a[3] < square_b[1] || square_b[2] < square_a[0] || square_b[3] < square_a[1]) {
			cout << 0;
		} else {
			cout << 1;
		}
	}

	return 0;
}
