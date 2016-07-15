//carpet.cpp
/* Problem Description
Nlogonia is known for its traditional square carpet industry, which are produced only with whole dimensions, for all positive integers. 
That is, the carpets are size of 1 × 1, 2 × 2, 3 × 3, and so on. John BigCarpet, great businessman of the sector, is planning the next 
loading for export, it must be exactly N rugs. The carpets are always rolled up and placed in a tube one after the other. 
For example, for a load of N = 4 dimensions mats 2 × 2, 4 × 4 × 6 × 3 6:03, will require a pipe length 2 + 4 + 6 + 3 = 15. 
The point is that the price pad is proportional to its area, so that the greater the sum of areas of carpet, the greater the 
profit of BigCarpet will be. In the previous example, the sum of the areas is 22 + 42 + 62 + 32 = 65. 
Only give to profit more, with the same length of pipe 15, if the load were four dimensions of carpets 1 × 1, 4 × 4 7 × 7:03 × 3, 
the sum of areas gives 75. will give to profit even more?

The ship arrived and BigCarpet need to embark charging. There is only one pipe of L length of pipe loading must contain exactly N rugs. 
What is the largest possible sum of the areas of N rugs that can be transported?
*/

#include <iostream>
#define MAX 1000000

using namespace std;


int main() {

	long long int tube_length, carpets;
	
	cin >> tube_length >> carpets;

	if(carpets <= tube_length && carpets <= (MAX - 1) && tube_length <= MAX) {
		cout << ((tube_length - carpets + 1) * (tube_length - carpets + 1)) + (carpets - 1);
	}

	return 0;
}
