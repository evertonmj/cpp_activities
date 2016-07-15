//album.cpp

#include <iostream>
#define MAX 1000

using namespace std;

int main() {
	int width, heigth, ph1_x, ph1_y, ph2_x, ph2_y, ph_x, ph_y, ph_x_i, ph_y_i, ph_x_i2, ph_y_i2;

	cin >> width >> heigth >> ph1_x >> ph1_y >> ph2_x >> ph2_y;

	if(	(width >= 1 && width <= MAX) &&
		(heigth >= 1 && heigth <= MAX) &&
		(ph1_x >= 1 && ph1_x <= MAX) &&
		(ph2_x >= 1 && ph2_x <= MAX) &&
		(ph1_y >= 1 && ph1_y <= MAX) &&
		(ph2_y >= 1 && ph2_y <= MAX)) {

		ph_x = ph1_x + ph2_x;
		ph_y = ph1_y + ph2_y;

		ph_x_i = ph1_y + ph2_x;
		ph_y_i = ph1_x + ph2_y;

		ph_x_i2 = ph2_y + ph1_y;
		ph_y_i2 = ph2_x + ph1_x;

		if(width > heigth) {
			if(ph_x <= width && ph_y <= heigth) {
				cout << "S";
			} else if (ph_x_i <= width){
				cout << "S";
			} else if (ph_x_i2 <= width) {
				cout << "S";
			} else {
				cout << "N";
			}
		} else {
			if(ph_y <= heigth && ph_x <= width) {
				cout << "S";
	        } else if (ph_y_i <= heigth){
		        cout << "S";
	        } else if (ph_y_i2 <= heigth) {
		        cout << "S";
	        } else {
		        cout << "N";
			}
		}
	}

	return 0;
}
